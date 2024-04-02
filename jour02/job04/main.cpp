#include "classes/Pingouin.cpp"

int main() {
    Pingouin tiplouf = Pingouin("Tiplouf", 3.1, 0.8, 3);
    Pingouin primplouf = Pingouin("Primplouf", 4, 1, 3.7);
    Pingouin pingoleon = Pingouin("Pingoleon", 6.6, 1.3, 4.9);
    
    Pingouin::showOlympics();
}