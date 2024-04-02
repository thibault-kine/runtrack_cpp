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

    Pingouin(std::string name, double swimSpeed, double walkSpeed, double slideSpeed) {
        this->name = name;
        this->swimSpeed = swimSpeed;
        this->walkSpeed = walkSpeed;
        this->slideSpeed = slideSpeed;

        colony.push_back(*this);
    }

    // Pingouin(Pingouin& p) {
    //     this->name      = p.name;
    //     this->swimSpeed = p.swimSpeed;
    //     this->walkSpeed = p.walkSpeed;

    //     colony.insert(colony.begin() + 1, *this);
    // }

    static void showOlympics() {
        for(Pingouin p : colony) {
            std::cout << p.name << " a fini la course en " << p.timeToSlide() << " secondes !" << std::endl;
        }
    }

    void greet();

    double timeToSlide();
};

std::vector<Pingouin> Pingouin::colony;

void Pingouin::greet() {
    std::cout << "Bonjour, je m'appelle " << name << std::endl;
    
    marche();
    nage();
}

double Pingouin::timeToSlide() {
    double result = 0.0;
    result += (15 / slideSpeed);    // 15m a glisser
    result += (20 / walkSpeed);     // 20m a plat
    result += (50 / swimSpeed);     // 50m de nage
    result += (15 / walkSpeed);     // 15 à plat
    return result;
}