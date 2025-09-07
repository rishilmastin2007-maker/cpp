#include <iostream>
using namespace std;

int fact(int x) {
    int f = 1;
    for (int i = 1; i <= x; i++) {
        f *= i;
    }
    return f;
}

int main() {
    int n, r;
    cout << "Enter the number n: ";
    cin >> n;
    cout << "Enter the r: ";
    cin >> r;

    int a = fact(n);
    int b = fact(r);
    int c = fact(n - r);

    cout << "nCr = " << (a / (b * c)) << endl;

    return 0;
}