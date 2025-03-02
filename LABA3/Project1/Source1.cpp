#include <iostream>
using namespace std;
#include "Header.h"
void Dif(complex a, complex b) {
	if (a.Re == NULL || a.Im == NULL || b.Re == NULL || b.Im == NULL) {
		cout << "Error NULL";
		exit(1);
	}
	cout << "Re = " << a.Re - b.Re << endl;
	cout << "Im = " << a.Im - b.Im << endl;
};
void Castoe(complex a, complex b) {
	if (a.Re == NULL || a.Im == NULL || b.Re == NULL || b.Im == NULL) {
		cout << "Error NULL";
		exit(1);
	}
	cout << "Re = " << (a.Re * b.Re + a.Im * b.Im) / (b.Re * b.Re + b.Im * b.Im) << endl;
	cout << "Im = " << (b.Re * a.Im - a.Re * b.Im) / (b.Re * b.Re + b.Im * b.Im);
};
void complex::Print() {
	cout << "Re= " << Re;
	cout << "Im= " << Im;
};