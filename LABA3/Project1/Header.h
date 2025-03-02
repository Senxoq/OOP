#ifndef Header.h
class complex {
public:
	double Re;
	double Im;

	complex(double re=NULL, double im=NULL) {
		Re = re;
		Im = im;
	};
	void Print();

};
void Castoe(complex a, complex b);
void Dif(complex a, complex b);



#endif;
