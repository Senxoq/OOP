#include <iostream>
using namespace std;
#include "function.h"
double Cicle::Area() {
    return 3.14 * R * R;
};
double Cicle::getRadius(){
    return R;
};
double Sektor::Area(){
    return (3.14 * getRadius() * getRadius() * Ygl) / 360;
}