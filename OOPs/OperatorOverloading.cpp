#include <iostream>
using namespace std;

class ComplexNumber {
public:
    int imaginary;
    int real;

    ComplexNumber operator +(ComplexNumber &c1) {
        ComplexNumber c3;
        c3.imaginary = c1.imaginary + this->imaginary;
        c3.real = c1.real + this->real;
        return c3;
    }

    ComplexNumber operator -(ComplexNumber &c1) {
        ComplexNumber c3;
        c3.imaginary = c1.imaginary - this->imaginary;
        c3.real = c1.real - this->real;
        return c3;
    }
};

int main() {
    ComplexNumber a1 , a2;
    a1.imaginary = 10;
    a1.real = 34;
    
    a2.imaginary = 10;
    a2.real = 34;

    ComplexNumber a3 = a1 + a2;
    ComplexNumber a4 = a1 - a2;

    cout<<"real : "<<a3.real<<" "<<"imag :"<<a3.imaginary<<endl;
    cout<<"real : "<<a4.real<<" "<<"imag :"<<a4.imaginary<<endl;

  
    return 0;
}