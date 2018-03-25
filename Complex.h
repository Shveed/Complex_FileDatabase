#ifndef COMPLEX_H
#define COMPLEX_H
#include <cmath>
#include <string.h>
#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

ofstream fout("data.txt", ios_base::app);

class Complex
{
private:
	double real = 0;
	double imag = 0;
public:
	Complex complexCreate(Complex *x);
	void complexAdd(Complex *x, Complex *y);
	void complexSub(Complex *x, Complex *y);
	void complexMult(Complex *x, Complex *y);
	void complexDiv(Complex *x, Complex *y);
	void complexModule(Complex *x);
	void printResult(double a, double b);
	void fileOut(Complex *x);
};

void printMenu();

char whichOp(char op);

void printError();

#endif COMPLEX_H