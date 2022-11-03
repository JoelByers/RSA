#include "RSA.h"
#include <iostream>

unsigned int gcd(unsigned int a, unsigned int b)
{
    // Solution found here: geeksforgeeks.org/program-to-find-gcd-or-hcf-of-two-numbers/
    unsigned int result = a < b ? a : b; // Find Minimum of a nd b
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
    std::cout << "E: " << RSA::encrypt << "\nD: " << RSA::decrypt << std::endl;
}

void RSA::getKeys(){
    unsigned int P = 2;
    unsigned int Q = 7;
    unsigned int N = P * N;
    unsigned int totientN = (P - 1) * (Q - 1);
    
    for(int i = 2; i < totientN; i++){
        if(gcd(i, N) == 1 && gcd(i, totientN) == 1){
            RSA::encrypt = i;
            break;
        }
    }

    RSA::decrypt = totientN - 1;
}