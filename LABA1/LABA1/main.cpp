#include <windows.h>
#include "geometry.h"
#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
   /* double x1, y1, x2, y2, x3, y3;
    cout << "Point1\n";
    cin >> x1 >> y1;
    cout << "Point2\n";
    cin >> x2 >> y2;
    cout << "Point3\n";
    cin >> x3 >> y3;
    Point A = Point(x1, y1),
        B = Point(x2, y2),
        C = Point(x3, y3);
    Segment Otrezok1 = Segment(A, B),
        Otrezok2 = Segment(B, C);
    Point S1 = Otrezok1.getMidpoint(),
        S2 = Otrezok2.getMidpoint();
    Line line1 = Line(A, B),
        line2 = Line(B, C),
        midperpendicular1 = line1.getPerpendicular(S1),
        midperpendicular2 = line2.getPerpendicular(S2);
    Point O = midperpendicular1.getIntersect(midperpendicular2);
    Segment Radius = Segment(O, A);
    Circle circle = Circle(O, Radius.getLength());
    cout << "( Center ="
        << circle.getCenter().getX() << ',' << circle.getCenter().getY()
        << "), Radius = " << circle.getR() << endl;*/
    cout << endl << "-------------------------------"<<endl;
    Vektor V1(5, 3);
    Vektor V2(2, 6);
    Vektor summ(0,0);
    cout << "SUMMA = \n";
    summ.summ(V1, V2);
    summ.P();
    cout << endl;
    cout << "RAZZ = \n";
    Vektor razz(0, 0);
    razz.razz(V1, V2);
    razz.P();
    cout << endl;
    cout << "V1 * 7 = \n"; 
    V1.skalar(7).P();
    cout << endl << "TREYGOL: \n";
    double x1, y1, x2, y2, x3, y3;
    cout << "Point1\n";
    cin >> x1 >> y1;
    cout << "Point2\n";
    cin >> x2 >> y2;
    cout << "Point3\n";
    cin >> x3 >> y3;
    Point A = Point(x1, y1), B = Point(x2, y2), C = Point(x3, y3);
    Segment Otrezok1 = Segment(A, B),  Otrezok2 = Segment(B, C), Otrezok3= Segment(C,A);
    Point S1 = Otrezok1.getMidpoint(), S2 = Otrezok2.getMidpoint(), S3 = Otrezok3.getMidpoint();
    Line line1 = Line(A, B), line2 = Line(B, C), line3 = Line(C, A);
    Line Mediana1 = Line(A, S2), 
        Mediana2 = Line(B, S3);
    Point O_median = Mediana1.getIntersect(Mediana1);
    cout << "MEDIANI PERESEK" << endl;
    O_median.Print();
    cout << endl;
    Line 
     midperpendicular1 = line1.getPerpendicular(S1),
       midperpendicular2 = line2.getPerpendicular(S2);
    Point O_perpendicular = midperpendicular1.getIntersect(midperpendicular2);
    cout << "PERPENDIKULAR PERESEK " << endl;
    O_perpendicular.Print();
    Sleep(9999);
    return 0;
}


