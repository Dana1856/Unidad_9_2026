#ifndef PRIMENUM_HPP
#define PRIMENUM_HPP

namespace Numbers {
    const int MAX_PRIMES = 25;

    struct PrimeList {
        int elements[MAX_PRIMES];
        int count;
    };

    void generatePrimes(PrimeList &list);
    void displayPrimes(const PrimeList &list);
}

#endif