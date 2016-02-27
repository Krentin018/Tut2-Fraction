#include <iostream>
#include "Fractions.h"

using namespace std;

Fractions ans;

Fractions Input()
{
	Fractions frac;
	int temp;
	cout << "Enter numerator" << endl;
	cin >> temp;
	frac.setNumer(temp);

	InvalidDenom:                         // label
	cout << "Enter denominator" << endl;
	cin >> temp;

	if (temp == 0)
	{
		cout << "Denominator can't be 0" << endl;
		goto InvalidDenom;
	}

	frac.setDenom(temp);

	return frac;
}

Fractions Fractions::add(Fractions &a)
{
	ans.numer = numer * a.denom + a.numer * denom;
	ans.denom = denom * a.denom;
	return ans;
}

Fractions Fractions::subtract(Fractions &a)
{
	ans.numer = numer * a.denom - a.numer * denom;
	ans.denom = denom * a.denom;
	return ans;
}

Fractions Fractions::multiply(Fractions &a)
{
	ans.numer = numer * a.numer;
	ans.denom = denom * a.denom;
	return ans;
}

Fractions Fractions::divide(Fractions &a)
{
	ans.numer = numer * a.denom;
	ans.denom = denom * a.numer;
	return ans;
}



int main()
{

	Fractions one;
	Fractions two;
	Fractions result;

	cout << "First fraction" << endl;
	one = Input();

	cout << "Second fraction" << endl;
	two = Input();


	cout << "A + B" << endl;
	result = one.add(two);
	result.print();

	cout << "A - B" << endl;
	result = one.subtract(two);
	result.print();

	cout << "A * B" << endl;
	result = one.multiply(two);
	result.print();

	cout << "A / B" << endl;
	result = one.divide(two);
	result.print();
}

