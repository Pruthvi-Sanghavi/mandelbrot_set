#ifndef MANDELBROT_HPP
#define MANDELBROT_HPP

#include <iostream>
#include <stdexcept>
#include <complex>
#include <cmath>

using namespace std;

typedef complex<double> dcomp;

class Mandelbrot {

private:
	dcomp z;
	dcomp c;

public:

	Mandelbrot(dcomp z = 0.0, dcomp c = 1.0i); // Constructor for class Mandelbrot
	
	dcomp getZ() const;
	void setZ(dcomp z);

	dcomp getC() const;
	void setC(dcomp c);

	dcomp mandelbrot_set() const;

	double modulus() const;

	void print() const;

};

#endif