#include "../include/mandelbrot.hpp"


int main(){

	Mandelbrot p1(0.0 + 1.0i, 2.0 + 2.0i);
	p1.print();
	cout << p1.mandelbrot_set() << endl;
}