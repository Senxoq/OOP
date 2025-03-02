#include <math.h>
#include "geometry.h"
#include <iostream>
using namespace std;
Point::Point(double X, double Y) {
    x = X; y = Y;
}
double Point::getX() {
    return x;
}
double Point::getY() {
    return y;
}
Circle::Circle(Point Center, double R) :center(Center) {
    r = R;
}
Point Circle::getCenter() {
    return center;
}
double Circle::getR() {
    return r;
}
Line::Line(double a, double b, double c) {
    A = a; B = b; C = c;
}
Line::Line(Point p1, Point p2) {
    A = p2.getY() - p1.getY();
    B = p1.getX() - p2.getX();
    C = -A * p1.getX() - B * p1.getY();
}
Point Line::getIntersect(Line line) {
    double d = A * line.B - B * line.A,
        d1 = -(C * line.B - B * line.C),
        d2 = -(A * line.C - C * line.A);
    return Point(d1 / d, d2 / d);
}
Line Line::getPerpendicular(Point p) {
    return Line(B, -A, -B * p.getX() + A * p.getY());
}
Segment::Segment(Point p1, Point p2) {
    x1 = p1.getX(); y1 = p1.getY();
    x2 = p2.getX(); y2 = p2.getY();
}
Point Segment::getMidpoint() {
    return Point((x1 + x2) / 2, (y1 + y2) / 2);
}
double Segment::getLength() {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

Vektor::Vektor(double x1=0, double y1=0) {
    x = x1;
    y = y1;
}
Vektor Vektor::summ(Vektor a, Vektor b) {
    x = a.x + b.x;
    y = a.y + b.y;
        return Vektor(x,y);
}
Vektor Vektor::razz(Vektor a, Vektor b) {
    x = a.x - b.x;
    y = a.y - b.y;
    return Vektor(x, y);
}
Vektor Vektor::skalar(int b) {
    double x1 = x * b;
   double  y1 = y * b;

    return Vektor(x1, y1);
}
void Vektor::P() {
    cout << "X = " << x << endl;
    cout << "Y = " << y;

}

void Point::Print() {
    cout <<" ( " << x << ", " << y << ")";
};