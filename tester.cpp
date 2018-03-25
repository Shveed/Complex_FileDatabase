#include "stdafx.h"
#include "Complex.h"
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	fout.open("data.txt", ios_base::app);
	char oper = ' ';
	fout << oper << endl;
	Complex *MyComplex1 = new Complex;
	Complex *MyComplex2 = new Complex;
	Complex *NewComplex = new Complex;
	printMenu();
	oper = whichOp(oper);
	switch (oper)
	{
	case '+':
		cout << "Enter first complex" << endl;
		MyComplex1->complexCreate(MyComplex1);
		cout << "Enter second complex" << endl;
		MyComplex2->complexCreate(MyComplex2);
		NewComplex->complexAdd(MyComplex1, MyComplex2);
		NewComplex->fileOut(MyComplex1);
		NewComplex->fileOut(MyComplex2);
		NewComplex->fileOut(NewComplex);
		break;
	case '-':
		cout << "Enter first complex" << endl;
		MyComplex1->complexCreate(MyComplex1);
		fout << MyComplex1 << endl;
		cout << "Enter second complex" << endl;
		MyComplex2->complexCreate(MyComplex2);
		fout << MyComplex2 << endl;
		NewComplex->complexSub(MyComplex1, MyComplex2);
		fout << NewComplex << endl;
		break;
	case '*':
		cout << "Enter first complex" << endl;
		MyComplex1->complexCreate(MyComplex1);
		cout << "Enter second complex" << endl;
		MyComplex2->complexCreate(MyComplex2);
		NewComplex->complexMult(MyComplex1, MyComplex2);
		NewComplex->fileOut(MyComplex1);
		NewComplex->fileOut(MyComplex2);
		NewComplex->fileOut(NewComplex);
		break;
	case '/':
		cout << "Enter first complex" << endl;
		MyComplex1->complexCreate(MyComplex1);
		cout << "Enter second complex" << endl;
		MyComplex2->complexCreate(MyComplex2);
		NewComplex->complexDiv(MyComplex1, MyComplex2);
		NewComplex->fileOut(MyComplex1);
		NewComplex->fileOut(MyComplex2);
		NewComplex->fileOut(NewComplex);
		break;
	case 'M':
	case 'm':
		NewComplex->complexModule(NewComplex);
		NewComplex->fileOut(NewComplex);
		break;
	default:
		printError();
		break;
	}
	fout.close();
	system("pause");
	delete MyComplex1;
	delete MyComplex2;
	delete NewComplex;
}