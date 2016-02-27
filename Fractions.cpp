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
	//if (numer < denom)
	//{
	int tem = gcd(numer, denom);
	numer = numer/tem;
	denom = denom / tem;
		if (numer == 0)
		{
			cout << "0" << endl;
		}
		else
		{
			cout << numer << "/" << denom << endl;
		}
	//}
}



void Fractions::mixed()
{

	//return gcd(numer, denom);

}

