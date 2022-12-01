#include <iostream>
#include "fastmodexpon.h"
#include "RSA.h"

using namespace std;

int main(){
    RSA rsa;
    rsa.printKeys();
    int a = 5;
    //cout << FastModExpon(125,1195,1921) << endl;
    cout << "Number:    " <<  a << endl;
    a = rsa.encrypt(a);
    cout << "Encrypted: " <<  a << endl;
    a = rsa.decrypt(a);
    cout << "Decrypted: " << a << endl;
    return 0;
}