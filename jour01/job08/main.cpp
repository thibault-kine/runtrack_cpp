#include <iostream>

using namespace std;

int main() {
    int year;
    cout << "Entrez une annee : ";
    cin >> year;

    if(year % 4 == 0) {
        if(year % 100 == 0) {
            if(year % 400 == 0) {
                cout << "L'annee est bissextile" << endl;
            }
            else {        
                cout << "L'annee n'est pas bissextile" << endl;
            }
        } else { 
            cout << "L'annee est bissextile" << endl;
        }
    } else {
        cout << "L'annee n'est pas bissextile" << endl;
    }
}