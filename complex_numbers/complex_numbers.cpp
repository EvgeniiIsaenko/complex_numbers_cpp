#include <iostream>
#include <cmath>
#include "complex_numbers.h"
#define ACCURACY 0.001f
using namespace std;

// Constructors
Complex_Number::Complex_Number(double _real_part, double _im_part) {
    real_part = _real_part;
    im_part = _im_part;
}

// Functions for real part
void Complex_Number::set_real(double _real_part) {
    real_part = _real_part;

    cout << "Set real part as: " << real_part << "\n";
}

double Complex_Number::get_real() {
    cout << "Got real part: " << real_part << "\n";

    return real_part;
}

// Functions for imaginary part
void Complex_Number::set_im(double _im_part) {
    im_part = _im_part;

    cout << "Set imaginary part as: " << im_part << "\n";
}

double Complex_Number::get_im() {
    cout << "Got imaginary part: " << im_part << "\n";

    return im_part;
}

// Operator overloads
Complex_Number Complex_Number::operator+(Complex_Number _complex) {
    Complex_Number result;
    result.real_part = real_part + _complex.real_part;
    result.im_part = im_part + _complex.im_part;

    print_operation(*this, _complex, result, '+');

    return result;
}

Complex_Number Complex_Number::operator+(double _number) {
    return *this + create_complex(_number);
}

Complex_Number Complex_Number::operator-(Complex_Number _complex) {
    Complex_Number result = *this - _complex;

    print_operation(*this, _complex, result, '-');

    return result;
}

Complex_Number Complex_Number::operator-(double _number) {
    return *this - create_complex(_number);
}

Complex_Number Complex_Number::operator*(Complex_Number _complex) {
    Complex_Number result;
    result.real_part = real_part * _complex.real_part - im_part * _complex.im_part;
    result.im_part = real_part * _complex.im_part + im_part * _complex.real_part;

    print_operation(*this, _complex, result, '*');

    return result;
}

Complex_Number Complex_Number::operator*(double number) {
    return *this * create_complex(number);
}

Complex_Number Complex_Number::operator/(Complex_Number _complex) {
    if (_complex.get_abs() == 0) {
        throw "Division by zero!";
    }

    Complex_Number result;
    result.real_part = (real_part * _complex.real_part + im_part * _complex.im_part) / (_complex.real_part * _complex.real_part - _complex.im_part * _complex.im_part); 
    result.im_part = (-1 * _complex.real_part * _complex.im_part + im_part * _complex.real_part) / ((_complex.real_part * _complex.real_part - _complex.im_part * _complex.im_part));

    print_operation(*this, _complex, result, '/');

    return result;
}

Complex_Number Complex_Number::operator/(double number) {
    return *this / create_complex(number);
}

Complex_Number Complex_Number::operator^(double power) {
    Complex_Number result;
    result.real_part = pow(get_abs(), power) * cos(power * atan(im_part / real_part));
    result.im_part = pow(get_abs(), power) * sin(power * atan(im_part / real_part));
    
    print_power(*this, result, power);

    return result;
}

bool Complex_Number::operator==(Complex_Number _complex) {
    return ((abs(real_part - _complex.real_part) < ACCURACY) && (abs(im_part - _complex.im_part) < ACCURACY));
}

bool Complex_Number::operator==(double number) {
    return ((abs(real_part - number) < ACCURACY) && (abs(im_part) < ACCURACY));
}

bool Complex_Number::operator!=(Complex_Number _complex) {
    return !(*this == _complex);
}

bool Complex_Number::operator!=(double number) {
    return !(*this == number);
}

// Utility functions
Complex_Number Complex_Number::create_complex(double number) {
    return Complex_Number(number, 0);
}

void Complex_Number::print() {
    cout << "(" << real_part << " + " << im_part << "i" << ")";
}

void Complex_Number::print_operation(Complex_Number _complex1, Complex_Number _complex2, Complex_Number _result, char _operator) {
    _complex1.print();
    cout << " " << _operator << " ";
    _complex2.print();
    cout << " = ";
    _result.print();
    cout << "\n";
}

void Complex_Number::print_power(Complex_Number _complex, Complex_Number result, double power) {
    _complex.print();
    cout << " ^ " << power << " = ";
    result.print();
    cout << "\n";
}

double Complex_Number::get_abs() {
    return sqrt(real_part * real_part + im_part * im_part);
}

Complex_Number::~Complex_Number() {}