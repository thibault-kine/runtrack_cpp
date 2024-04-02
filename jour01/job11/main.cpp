#include <iostream>

using std::cout, std::endl;

void swapValues(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int x = 54;
    int y = 6;

    cout << "x = " << x << endl; 
    cout << "y = " << y << endl; 

    swapValues(x, y);

    cout << "x = " << x << endl; 
    cout << "y = " << y << endl; 
}
