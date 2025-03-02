#include <iostream>
#include "function.h"
using namespace std;

int main() {
    Cicle C1(10);
    cout << "Area of Circle: " << C1.Area() << endl;

    Sektor S1(10, 90);
    cout << "Area of Sector: " << S1.Area() << endl;

    return 0;
}