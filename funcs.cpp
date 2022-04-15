#include "Header.h"
#include <iostream>
#include <algorithm>

using namespace std;

template<class T>
void print(T* mas, int size) {
	for (int i = 0; i < size; ++i) {
		cout << mas[i] << endl;
	}
	cout << endl;
}

void _sort(int* mas, int size) {
	for (int i = 0; i < size; ++i) {
		for (int j = i; j > 0 and mas[j - 1] > mas[j]; --j) {
			swap(mas[j - 1], mas[j]);
		}
	}
	print(mas, size);
}
void _sort(double* mas, int size) {
	for (int i = 0; i < size; ++i) {
		for (int j = i; j > 0 and mas[j - 1] > mas[j]; --j) {
			swap(mas[j - 1], mas[j]);
		}
	}
	print(mas, size);
}
void _sort(Complex* mas, int size) {
	for (int i = 0; i < size; ++i) {
		for (int j = i; j > 0 and mas[j - 1] > mas[j]; --j) {
			swap(mas[j - 1], mas[j]);
		}
	}

	for (int i = 0; i < size; ++i) {
		cout << mas[i].getterRe() << " " << mas[i].getterIm() << endl;
	}
	cout << endl;
}