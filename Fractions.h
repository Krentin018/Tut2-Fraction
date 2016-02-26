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

	void print();
};

