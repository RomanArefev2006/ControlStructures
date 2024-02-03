#include <iostream>;

using namespace std;

//#define HARDCHESS
//#define XOR

void main() {
	setlocale(LC_ALL, "");
#ifdef HARDCHESS
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
#endif // HARDCHESS

#ifdef XOR
	int a, b;
	cout << "¬ведите число: "; cin >> a;
	cout << "¬ведите число: "; cin >> b;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	cout << a << endl << b;
#endif // XOR
}