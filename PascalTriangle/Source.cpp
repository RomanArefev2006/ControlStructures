#include <iostream>

using namespace std;

void main() {
    setlocale(LC_ALL, "");

    int x;

    cout << "¬ведите число: "; cin >> x;

    for (int i = 0; i < x; i++) {
        int n = 1;

        for (int j = 0; j < x - i - 1; j++) {
            cout << " ";
        }

        for (int j = 0; j <= i; j++) {
            cout << n << " ";
            n = n * (i - j) / (j + 1);
        }

        cout << endl;
    }
}