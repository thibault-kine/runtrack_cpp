#include <iostream>

class Terrestre {
protected:
    bool canWalk = true;
    double walkSpeed;

    virtual void marche() {
        std::cout << "Je marche a " << walkSpeed << "m/s" << std::endl;
    }
};