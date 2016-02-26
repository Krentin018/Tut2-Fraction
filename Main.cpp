#include <iostream>
#include "Fractions.h"

using namespace std;

Fractions Input()
{
	Fractions temp;
	int num;
	cout << "Enter numerator" << endl;
	cin >> num;
	temp.setNumer(num);

	InvalidDenom:                         // label
	cout << "Enter denominator" << endl;
	cin >> num;

	if (num == 0)
	{
		cout << "Denominator can't be 0" << endl;
		goto InvalidDenom;
	}

	temp.setDenom(num);

	return temp;
}


int main()
{

	Fractions one;
	Fractions two;

	one = Input();
	one.print();
}

