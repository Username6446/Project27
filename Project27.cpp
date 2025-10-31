#include <iostream>
#include "MyArray.h"
#include "Fraction.h"
using namespace std;
int main()
{
    /*MyArray a(10, 2);
    a.print();

    a[0] = 333;
    a[20] = 333;
    a.print();

    cout << "Test get(index) :: " << a[0] << endl;
    cout << "Test get(index) :: " << a[20] << endl;

    for (size_t i = 0; i < a.getSize(); i++) {
        a[i] = rand() % 20;
    }
    a.print();
    MyArray slice = a(2, 8);
    slice.print();
    MyArray up = slice(2);
    up.print();

    a.print();
    cout << "Sum ::" << (int)a << endl;
    cout << "Double ::" << (double)a << endl;
    a -= 5;
    a.print();
    */

    Fraction a(1, 2);
    Fraction b(1, 4);
    
    a.print();
    b.print();



}

