#include "Header.h"
using namespace std;
#include <iostream>
int main() {
    setlocale(LC_ALL, "Russian");
    comel<int> C1(2, 3);
    C1.stepen();
    comel<double> C2(1.5, 3);
    C2.stepen();
    matric <int> M1(2);
    M1.cinmatr();
    cout << "Âòîðîé ìàññèâ" << endl;
    matric <int> M2(2);
    M2.cinmatr();
     matric <int> M3 = M1.proizved(M2);
     cout << "ÂÛÂÎÄ ÏÐÎÈÇÂÅÄÅÍÈß: " << endl;
     M3.print();

    return 0;
}
