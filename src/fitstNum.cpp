#include <iostream>
#include "firstNum.hpp"

namespace Numbers {
    void fillArray(IntegerList &list) {
        list.counter = 0; 
        for (int i = 0; i < MAX_SIZE; i++) {
            list.elements[i] = i + 1; 
            list.counter++;           
        }
    }

    void displayArray(const IntegerList &list) {
        std::cout << "--- First 100 Integer Numbers ---\n";
        for (int i = 0; i < list.counter; i++) {
            std::cout << list.elements[i] << " ";
        }
        std::cout << "\n";
    }
}