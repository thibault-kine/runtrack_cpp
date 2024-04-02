#include <iostream>

using namespace std;

int main() {
    int n, m;
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;

    cout << "n = " << n << " et m = " << m << endl;

    int _ = n;
    n = m;
    m = _;

    cout << "n = " << n << " et m = " << m << endl;
}