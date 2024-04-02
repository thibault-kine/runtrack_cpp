#include <iostream>

class Aquatique {
protected:
    bool canSwim = true;
    double swimSpeed;  

    virtual void nage() {
        std::cout << "Je nage a " << swimSpeed << "m/s" << std::endl;
    }
};