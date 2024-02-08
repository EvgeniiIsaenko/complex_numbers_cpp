#include <iostream>
using namespace std;

class Complex_Number {
private:
    double real_part, im_part;
    
public:
    // Constructors
    Complex_Number(double _real_part = 0, double _im_part = 0) {
        real_part = _real_part;
        im_part = _im_part;
    }

    // Functions for real part
    void set_real(double _real_part) {
        real_part = _real_part;

        cout << "Set real part as: " << real_part << "\n";
    }

    double get_real() {
        cout << "Got real part: " << real_part << "\n";

        return real_part;
    }

    // Functions for imaginary part
    void set_im(double _im_part) {
        im_part = _im_part;

        cout << "Set imaginary part as: " << im_part << "\n";
    }

    double get_im() {
        cout << "Got imaginary part: " << real_part << "\n";

        return im_part;
    }

    // Operator overloads
    Complex_Number operator+(Complex_Number _complex) {
        Complex_Number result;
        result.real_part = real_part + _complex.real_part;
        result.im_part = im_part + _complex.im_part;

        print_operation(*this, _complex, result, '+');

        return result;
    }

    Complex_Number operator-(Complex_Number _complex) {
        Complex_Number result = *this - _complex;

        print_operation(*this, _complex, result, '-');

        return result;
    }

    Complex_Number operator*(Complex_Number _complex) {
        Complex_Number result;
        result.real_part = real_part * _complex.real_part - im_part * _complex.im_part;
        result.im_part = real_part * _complex.im_part + im_part * _complex.real_part;

        print_operation(*this, _complex, result, '*');

        return result;
    }

    // Minor utility functions
    void print() {
        cout << "(" << get_real << " + " << im_part << "i" << ")" << "\n";
    }

    void print_operation(Complex_Number _complex1, Complex_Number _complex2, Complex_Number _result, char _operator) {
        _complex1.print();
        cout << " " << _operator << " " << "\n";
        _complex2.print();
        cout << " = ";
        _result.print();
    }
};

void main() {

}