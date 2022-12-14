#ifndef _RSA_H
#define _RSA_H

int gcd(int a, int b);

class RSA{
    public:
        RSA();
        void printKeys();
        int encrypt(int data);
        int decrypt(int data);
    private:
        int e;
        int d;
        int modulus;
        void getKeys();
        signed long gcdExtended(signed long x, signed long b, signed long* a, signed long* y);
};

#endif
