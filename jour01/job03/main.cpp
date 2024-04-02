#include <iostream>

int main() {
    int numbers[7];
    std::cout << "Entrez 5 nombres" << std::endl;

    numbers[7] = 0; // notre incrémenteur
    numbers[5] = 0; // notre résultat
    while(numbers[7] < 5) {
        std::cin >> numbers[ numbers[7] ];
        numbers[5] += numbers[ numbers[7] ];
        std::cout << "i = " << numbers[7] << " ; result = " << numbers[5] << std::endl;
        numbers[7]++;
    }
    std::cout << "sortie de boucle" << std::endl;

    std::cout << numbers[5] / 5 << std::endl;
}