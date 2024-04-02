#include "classes/Pingouin.cpp"

int main() {
    Pingouin base   = Pingouin("Tiplouf");
    Pingouin clone  = Pingouin(base);

    std::cout << "BASE : " << std::endl;
    base.greet();
    std::cout << "CLONE : " << std::endl;
    clone.greet();
}