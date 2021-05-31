#include "../include/mandelbrot.hpp"


Mandelbrot::Mandelbrot(dcomp z_val, dcomp c_val){
	z = z_val;
	c = c_val;
}

dcomp Mandelbrot::getZ() const {
	return z;
}

void Mandelbrot::setZ(dcomp z){
	this -> z = z;
} 

dcomp Mandelbrot::getC() const {
	return c;
}

void Mandelbrot::setC(dcomp c){
	this -> c = c;
}

dcomp Mandelbrot::mandelbrot_set() const {

	return z*z + c;
}

void Mandelbrot::print() const {

	cout << "(" << z << "," << c << ")" << endl; 
}

