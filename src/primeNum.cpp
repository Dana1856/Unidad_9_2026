#include <iostream>
#include "primeNum.hpp"

namespace Numbers {
    // Encapsulación de función auxiliar (oculta fuera del espacio de nombres/archivo)
    static bool isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

    void generatePrimes(PrimeList &list) {
        list.count = 0;
        for (int i = 1; i <= 100 && list.count < MAX_PRIMES; i++) {
            if (isPrime(i)) {
                list.elements[list.count] = i;
                list.count++;
            }
        }
    }

    void displayPrimes(const PrimeList &list) {
        std::cout << "--- Numeros Primos entre 1 y 100 ---\n";
        for (int i = 0; i < list.count; i++) {
            std::cout << list.elements[i] << " ";
        }
        std::cout << "\n";
    }
}