#include <iostream>

using std::cout, std::endl, std::cin;

int main() {
    int n;
    cout << "Entrez un nombre entier supérieur à 5 : ";
    cin >> n;

    int start = 5;
    int a = 0, b = 0;
    while(start <= n) {
        a = start*start*start;
        b += a;
        start++;
    }

    cout << "Somme complète : " << b << endl;
}