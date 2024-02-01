#include <iostream>;

using namespace std;

void main() {
	setlocale(LC_ALL, "");
	int x;
	cout << "¬ведите число: "; cin >> x;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < x; j++) {
			for (int k = 0; k < x; k++) {
				for (int l = 0; l < x; l++) {
					if ((i + k) % 2 == 0)cout << "* ";
					else cout << "  ";
				}
			}
			cout << endl;
		}
	}
}