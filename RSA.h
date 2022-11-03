#ifndef _RSA_H
#define _RSA_H

unsigned int gcd(unsigned int a, unsigned int b);

class RSA{
    public:
        RSA();
        void printKeys();
    private:
        unsigned int encrypt;
        unsigned int decrypt;
        void getKeys();
};

#endif
