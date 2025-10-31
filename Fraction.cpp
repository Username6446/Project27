#include "Fraction.h"


Fraction::Fraction() : Fraction(0,1) {}

Fraction::Fraction(int num) : Fraction(num,1) {}

Fraction::Fraction(int num, int den)
{
	if (den == 0) {
		cout << "Denominator can't be 0, set to 1\n";
		den = 1;
	}
	if (den < 0) {
		num = -num;
		den = -den;
	}
	this->num = num;
	this->den = den;
	reduction();
}

int Fraction::getNum() const
{
	return this->num;
}

int Fraction::getDen() const
{
	return this->den;
}

void Fraction::print() const{
	
	if (num > den) {
		cout << (double(num) / den) << endl;
	}
	else {
		cout << num << "/" << den << endl;;
	}
}

void Fraction::reduction()
{

	if (den<0) {
		num = -num;
		den = -den;
	}
	if (num % den == 0) {
		num /= den;
		den = 1;
	}
	if (den % num == 0) {
		den /= num;
		num = 1;
	}


}

Fraction Fraction::operator+(const Fraction& other)
{
	
	int newDen = this->den * other.den;
	Fraction res(other.den * this->num + this->den * other.num, newDen);
	return res;
}

Fraction Fraction::operator-(const Fraction& other)
{
	
	int newDen = this->den * other.den;
	Fraction res(other.den * this->num - this->den * other.num, newDen);
	return res;
}
Fraction Fraction::operator*(const Fraction& other)
{
	Fraction res(this->num  * other.num, this->den * other.den);
	return res;
}
Fraction Fraction::operator/(const Fraction& other)
{
	Fraction res(this->num * other.den, this->den * other.num);
	return res;
}

Fraction& Fraction::operator ++() {
	this->num+=den;
	return *this;
}
Fraction Fraction::operator ++(int) {
	Fraction tmp(*this); 
	++*this; 
	return tmp;
}
Fraction& Fraction::operator --() {
	this->num-=den;
	return *this;
}
Fraction Fraction::operator --(int) {
	Fraction tmp(*this);
	--*this;
	return tmp;
}



bool Fraction::operator==(const Fraction& other)
{
	return num * other.den == den * other.num;
}

bool Fraction::operator!=(const Fraction& other)
{
	return !(*this == other);
}

bool Fraction::operator>(const Fraction& other)
{
	return num * other.den > den * other.num;
}

bool Fraction::operator<(const Fraction& other)
{
	return num * other.den < den * other.num;
}