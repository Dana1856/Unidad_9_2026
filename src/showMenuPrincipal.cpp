#include <iostream>
#include "showMenuPrincipal.hpp"
#include "utilities.hpp"
#include "firstNum.hpp"
#include "primeNum.hpp"
#include "oddNum.hpp"

namespace UI {
    void showMenu() {
        int option;
        bool repeat = true;

        do {
            SystemUtils::clearConsole();

            std::cout << "\n\n\t\t\tMENU PRINCIPAL\n";
            std::cout << "\t\t\t------------\n";
            std::cout << "\n\t1. Numeros enteros\n";
            std::cout << "\t2. Numeros primos\n";
            std::cout << "\t3. Numeros impares\n";
            std::cout << "\t0. SALIR\n";

            std::cout << "\n\tIngrese una opcion: ";
            std::cin >> option;

            switch (option) {
                case 1: {
                    Numbers::IntegerList intList;
                    Numbers::fillArray(intList);
                    Numbers::displayArray(intList);
                    break;
                }
                case 2: {
                    Numbers::PrimeList primeList;
                    Numbers::generatePrimes(primeList);
                    Numbers::displayPrimes(primeList);
                    break;
                }
                case 3: {
                    Numbers::OddList oddList;
                    Numbers::generateOdds(oddList);
                    Numbers::displayOdds(oddList);
                    break;
                }
                case 0:
                    repeat = false;
                    break;
                default:
                    std::cout << "\nOpcion no valida.\n";
                    break;
            }

            if (repeat) {
                SystemUtils::pauseConsole();
            }

        } while (repeat);
    }
}