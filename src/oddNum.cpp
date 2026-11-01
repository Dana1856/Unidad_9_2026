#include <iostream>
#include "oddNum.hpp"

namespace Numbers {
    void generateOdds(OddList &list) {
        list.count = 0;
        for (int i = 1; i <= 100; i += 2) {
            if (list.count < MAX_ODDS) {
                list.elements[list.count] = i;
                list.count++;
            }
        }
    }

    void displayOdds(const OddList &list) {
        std::cout << "--- Numeros Impares entre 1 y 100 ---\n";
        for (int i = 0; i < list.count; i++) {
            std::cout << list.elements[i] << " ";
        }
        std::cout << "\n";
    }
}