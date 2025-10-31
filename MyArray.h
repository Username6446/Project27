#pragma once
class MyArray
{
private:
	int* arr = nullptr;
	size_t size = 0;
public:
	MyArray();
	MyArray(const size_t& size);
	MyArray(const size_t& size, int value);
	MyArray(const MyArray& other);
	~MyArray();

	size_t getSize() const { return size; }
	void print() const;

	int operator[](size_t index) const; // return copy of value of ind
	int& operator[](size_t index) ; // return address of value of ind
	MyArray operator()(size_t startIndex, size_t endIndex) const; // return address of value of ind
	MyArray operator()(int up) const; // return address of value of ind
	
	MyArray& operator -=(int less); // return address of value of ind

	explicit operator int() const; // return sum;
	explicit operator double() const; // return avg;

};

