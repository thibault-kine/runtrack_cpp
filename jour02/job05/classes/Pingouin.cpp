#include <iostream>
#include <string.h>
#include <vector>
#include <memory>
#include <algorithm>

#include "Aquatique.cpp"
#include "Terrestre.cpp"

using std::cout, std::endl, std::vector, std::string;

class Pingouin : Aquatique, Terrestre {
    string name;
    double slideSpeed;

public:
    static vector<Pingouin> colony;

    Pingouin(string name, double swimSpeed, double walkSpeed, double slideSpeed) {
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
    double timeToSlide();

    static void showOlympics() {
        auto pingouinBySpeed = [](Pingouin& p1, Pingouin& p2) {
            return p1.timeToSlide() < p2.timeToSlide();
        };
        std::sort(Pingouin::colony.begin(), Pingouin::colony.end(), pingouinBySpeed);
        int i = 1;
        for(Pingouin p : colony) {
            cout << i << " - \"" << p.name << "\" - " << p.timeToSlide() << " secondes" << endl;
            i++;
        }
    }

    void greet();

};

vector<Pingouin> Pingouin::colony;

void Pingouin::greet() {
    cout << "Bonjour, je m'appelle " << name << endl;
    
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