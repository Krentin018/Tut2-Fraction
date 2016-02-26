#pragma once
class Fractions
{
public:
	int numer;
	int denom;
	int num;

	Fractions();
	~Fractions();
	
	void setNumer(int);
	void setDenom(int);

	Fractions Fractions::add(Fractions &a);
	Fractions Fractions::subtract(Fractions &a);
	Fractions Fractions::multiply(Fractions &a);
	Fractions Fractions::divide(Fractions &a);

	void print();
};

