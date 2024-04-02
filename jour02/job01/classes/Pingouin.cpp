#include <iostream>

#include "Aquatique.cpp"
#include "Terrestre.cpp"

class Pingouin : Aquatique, Terrestre {
protected:  
    std::string name;

public:
    Pingouin(std::string name) {
        this->name = name;
        this->swimSpeed = 3.2;
        this->walkSpeed = 0.8;
    }

    void greet() {
        std::cout << "Bonjour, je m'appelle " << name << std::endl;
    
        marche();
        nage();
    }
};