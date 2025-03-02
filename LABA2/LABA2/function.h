#ifndef function.h 

class Cicle {
private:
    double R;
public:
    Cicle(double r) {
        R = r;
    }
    double Area();
    double getRadius();
};

class Sektor : public Cicle {
private:
    double Ygl;
public:
    Sektor(double r, double n) : Cicle(r) {
        Ygl = n;
    }
    double Area();
};


#endif