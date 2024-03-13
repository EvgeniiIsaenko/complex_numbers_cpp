#pragma once

class Complex_Number {
private:
    double real_part, im_part;
public:
    // Constructors
    Complex_Number(double _real_part = 0, double _im_part = 0);

    // Functions for real part
    void set_real(double _real_part);
    double get_real();

    // Functions for imaginary part
    void set_im(double _im_part);
    double get_im();

    // Operator overloads
    Complex_Number operator+(Complex_Number _complex);
    Complex_Number operator+(double _number);
    Complex_Number operator-(Complex_Number _complex);
    Complex_Number operator-(double _number);
    Complex_Number operator*(Complex_Number _complex);
    Complex_Number operator*(double number);
    Complex_Number operator/(Complex_Number _complex);
    Complex_Number operator/(double number);
    Complex_Number operator^(double power);
    bool operator==(Complex_Number _complex);
    bool operator==(double number);
    bool operator!=(Complex_Number _complex);
    bool operator!=(double number);

    // Utility functions
    Complex_Number create_complex(double number); // utilized when using an operator overload where a real number AND the complex are involved
    void print(); // prints out the complex number
    void print_operation(Complex_Number _complex1, Complex_Number _complex2, Complex_Number _result, char _operator); // prints out the operation that was performed
    void print_power(Complex_Number _complex, Complex_Number result, double power); // prints out the operation (power) that was performed
    double get_abs(); // gets and abs of the complex number
    ~Complex_Number(); // destructor
};