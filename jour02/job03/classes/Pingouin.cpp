#include <iostream>
#include <string.h>
#include <vector>
#include <memory>

#include "Aquatique.cpp"
#include "Terrestre.cpp"

class Pingouin : Aquatique, Terrestre {
    std::string name;
    double slideSpeed;

public:
    static std::vector<Pingouin> colony;

    Pingouin(std::string name) {
        this->name = name;
        this->swimSpeed = 3.2;
        this->walkSpeed = 0.8;

        colony.push_back(*this);
    }

    Pingouin(Pingouin& p) {
        this->name      = p.name;
        this->swimSpeed = p.swimSpeed;
        this->walkSpeed = p.walkSpeed;

        colony.push_back(*this);
    }

    void getSlideSpeed(double value) {
        this->slideSpeed = value;
    }

    double getSlideSpeed() {
        return this->slideSpeed;
    }

    void greet() {
        std::cout << "Bonjour, je m'appelle " << name << std::endl;
    
        marche();
        nage();
    }
};