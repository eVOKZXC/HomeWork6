#ifndef Header
#define Header
#include <cmath>

class Complex {
private:
	int re;
	int im;

public:
	Complex() {
		re = 0;
		im = 0;
	}
	Complex(int re, int im) {
		this->re = re;
		this->im = im;
	}

	int getterRe() { return re; }
	int getterIm() { return im; }

	int moduleComplexNum() {
		return sqrt(pow(re, 2) + pow(im, 2));
	}

	bool operator >(const Complex& other){
		return this->moduleComplexNum() > (sqrt(pow(other.re, 2) + pow(other.im, 2)));
	}

};



#endif Header

