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