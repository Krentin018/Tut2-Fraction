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

int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return gcd(b, a % b);
	}
}

void Fractions::print()
{
	int whole;
	int temp = gcd(numer, denom);
	numer = numer / temp;
	denom = denom / temp;

	if (numer < denom)
	{
		if (numer == 0)
		{
			cout << "0\n" << endl;
		}
		else
		{
			cout << numer << "/" << denom <<"\n"<< endl;
		}
	}
	else
	{
		if (numer % denom == 0)
		{
			cout << numer / denom << "\n" << endl;
		}
		else
		{
			whole = (int)(numer / denom);
			numer = numer - (whole * denom);

			cout << whole << " " << numer << "/" << denom << "\n" << endl;
		}
	}
}
