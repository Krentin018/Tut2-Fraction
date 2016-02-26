#include "Fractions.h"
#include <iostream>


using namespace std;


Fractions::Fractions()
{
	numer = 1;
	denom = 1;
}


Fractions::~Fractions()
{
	numer = 0;
	denom = 0;
}

void Fractions::setNumer(int num)
{
	numer = num;
}

void Fractions::setDenom(int den)
{
	denom = den;
}

void Fractions::print()
{
	if (numer == 0)
	{
		cout << "0" << endl;
	}
	else
	{
		cout << numer << "/" << denom << endl;
	}

}
