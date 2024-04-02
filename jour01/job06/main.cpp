#include <iostream>

using namespace std;

int main() {
    double kilo_price, kilos, tva;
    cout << "Quel est le prix au kg (HT) ? ";
    cin >> kilo_price;
    cout << "Combien de kg ? ";
    cin >> kilos;
    cout << "De combien est la TVA (en %) ? ";
    cin >> tva;

    double price = kilo_price * kilos;
    price += (price * tva) / 100;

    cout << "Prix TTC: €" << price << endl; 
}