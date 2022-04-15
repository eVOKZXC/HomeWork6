#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include "Header.h"

using namespace std;

void _sort(int* mas, int size);
void _sort(double* mas, int size);
void _sort(Complex* mas, int size);


int main() {
	srand(time(NULL));
	double a[10] = { -12.21, 0., 13.1, 8.4, 33.33, -7.12, 11.27, 42.076, 53.49, 74.0502 };
	int b[10] = { 9, 7, 12, 18, 69, -4, -228, -169, 0, 28};
	Complex c[10];
	for (int i = 0; i < size(c); ++i) {
		int tempRe = rand() % 50;
		int tempIm = rand() % 50;
		Complex buf(tempRe, tempIm);
		c[i] = buf;
	}

	_sort(a, 10);
	_sort(b, 10);
	_sort(c, 10);
}