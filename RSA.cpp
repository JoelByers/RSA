#include "RSA.h"
#include "fastmodexpon.h"
#include <iostream>

unsigned int gcd(int a, int b)
{
    // Solution found here: geeksforgeeks.org/program-to-find-gcd-or-hcf-of-two-numbers/
    int result = a < b ? a : b; // Find Minimum of a nd b
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result; // return gcd of a nd b
}

RSA::RSA(){
    getKeys();
}

void RSA::printKeys(){
    std::cout << "E: " << RSA::e << "\nD: " << RSA::d << "\nN: " << RSA::modulus << std::endl;
}

void RSA::getKeys(){
    int P = 113;
    int Q = 11;
    RSA::modulus = P * Q;
    int totientModulus = (P - 1) * (Q - 1);
    
    for(int i = 2; i < totientModulus; i++){
        if(gcd(i, RSA::modulus) == 1 && gcd(i, totientModulus) == 1){
            RSA::e = i;
            break;
        }
    }

    int k = 2;
    RSA::d = 1 + (k * totientModulus) / RSA::e;
}

int RSA::encrypt(int data){
    return FastModExpon(data, RSA::e, RSA::modulus);
}

int RSA::decrypt(int data){
    return FastModExpon(data, RSA::d, RSA::modulus);
}