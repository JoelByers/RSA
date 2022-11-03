#include <iostream>
#include "RSA.h"

using namespace std;

int main(){
    RSA rsa;
    rsa.printKeys();
    char a = 'a';
    cout << a << endl;
    int b = (char)rsa.encrypt((int)a);
    cout << b << endl;
    a = (char)rsa.decrypt(b);
    cout << a << endl;
    return 0;
}