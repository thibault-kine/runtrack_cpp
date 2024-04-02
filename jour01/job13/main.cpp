#include <iostream>

using std::cout, std::endl;

void fib(int n) {
    int a = 0, b = 1, c;
    cout << a << " " << b << " ";
    
    for(int i = 2; i < n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}

int main() {
    int max = 10;
    fib(max);
}