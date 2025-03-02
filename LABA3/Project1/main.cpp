#include <iostream>
using namespace std;
#include "Header.h"
int main() {
	complex C1(10,20);
	complex C2(5, 5);
	cout<<"Complex1" << endl;
	C1.Print();
	cout << endl;
	cout << "Dif " << endl;
	 Dif(C1, C2);
	 cout << "Chasttoe " << endl;
	 Castoe(C1, C2);


	return 0;
}