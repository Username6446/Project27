#pragma once

#include <iostream>
using namespace std;

class Fraction
{
private:
	int num;
	int den;
public:
	Fraction();
	Fraction(int num);
	Fraction(int num, int den);

	int getNum() const;
	int getDen() const;

	void print() const;
	void reduction();

	Fraction operator+(const Fraction& other);
	Fraction operator-(const Fraction& other);
	Fraction operator*(const Fraction& other);
	Fraction operator/(const Fraction& other);

	Fraction& operator ++();
	Fraction operator ++(int);
	Fraction& operator --();
	Fraction operator --(int);

	bool operator==(const Fraction& other);
	bool operator!=(const Fraction& other);
	bool operator>(const Fraction& other);
	bool operator<(const Fraction& other);


};

