#include <iostream>

int main() {
    std::cout << "Entrez un nombre : ";
    int num;
    std::cin >> num;

    num % 2 == 0 
    ?   std::cout << num << " est pair" << std::endl
    :   std::cout << num << " est impair" << std::endl;
}