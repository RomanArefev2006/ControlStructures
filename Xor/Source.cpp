#include <iostream>;

using namespace std;
//#define XOR

void main() {
	setlocale(LC_ALL, "");

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