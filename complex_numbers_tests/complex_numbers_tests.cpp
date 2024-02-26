#include "../complex_numbers/complex_numbers.cpp"
#include <gtest/gtest.h>
using namespace std;

// constructors
TEST(complex, null_constr) {
    
    Complex_Number c_null = Complex_Number();
    EXPECT_EQ(c_null.get_real(), 0);
    EXPECT_EQ(c_null.get_im(), 0);
}

TEST(complex, constr) {
    Complex_Number c = Complex_Number(1, 5);
    EXPECT_EQ(c.get_real(), 1);
    EXPECT_EQ(c.get_im(), 5);
}

TEST(complex, double_constr) {
    Complex_Number c = Complex_Number(1.23, 1.53);
    EXPECT_DOUBLE_EQ(c.get_real(), 1.23);
    EXPECT_DOUBLE_EQ(c.get_im(), 1.53);
}

// incapsulation

TEST(complex, set_get_real) {
    Complex_Number c = Complex_Number();
    c.set_real(1);
    EXPECT_EQ(c.get_real(), 1);
}

TEST(complex, set_get_im) {
    Complex_Number c = Complex_Number();
    c.set_im(5);
    EXPECT_EQ(c.get_im(), 5);
}

// operations
TEST(complex, addition_op) {
    Complex_Number c1 = Complex_Number(1, 5);
    Complex_Number c2 = Complex_Number(3, -2);
    Complex_Number result = c1 + c2;
    EXPECT_EQ(result.get_real(), 4);
    EXPECT_EQ(result.get_im(), 3);
}

TEST(complex, addition_num_op) {
    Complex_Number c1 = Complex_Number(1, 5);
    Complex_Number result = c1 + 4;
    EXPECT_EQ(result.get_real(), 5);
    EXPECT_EQ(result.get_im(), 5);
}

TEST(complex, subtraction_op) {
    Complex_Number c1 = Complex_Number(1, 5);
    Complex_Number c2 = Complex_Number(3, -2);
    Complex_Number result = c1 - c2;
    EXPECT_EQ(result.get_real(), -2);
    EXPECT_EQ(result.get_im(), 7);
}

TEST(complex, subtraction_num_op) {
    Complex_Number c1 = Complex_Number(1, 5);
    Complex_Number result = c1 - 4;
    EXPECT_EQ(result.get_real(), -3);
    EXPECT_EQ(result.get_im(), 5);
}

TEST(complex, multiplication_op) {
    Complex_Number c1 = Complex_Number(1, 5);
    Complex_Number c2 = Complex_Number(3, -2);
    Complex_Number result = c1 * c2;
    EXPECT_EQ(result.get_real(), 13);
    EXPECT_EQ(result.get_im(), -17);
}

TEST(complex, multiplication_num_op) {
    Complex_Number c1 = Complex_Number(1, 5);
    Complex_Number result = c1 * 4;
    EXPECT_EQ(result.get_real(), 4);
    EXPECT_EQ(result.get_im(), 20);
}

TEST(complex, division_op) {
    Complex_Number c1 = Complex_Number(1, 5);
    Complex_Number c2 = Complex_Number(3, -2);
    Complex_Number result = c1 / c2;
    EXPECT_DOUBLE_EQ(result.get_real(), -7 / 13);
    EXPECT_DOUBLE_EQ(result.get_im(), 17 / 13);
}

TEST(complex, division_num_op) {
    Complex_Number c1 = Complex_Number(1, 5);
    Complex_Number result = c1 / 4;
    EXPECT_DOUBLE_EQ(result.get_real(), 1 / 4);
    EXPECT_DOUBLE_EQ(result.get_im(), 5 / 4);
}

TEST(complex, pow_op) {
    Complex_Number c1 = Complex_Number(1, 5);
    Complex_Number result = c1 ^ 3;
    EXPECT_DOUBLE_EQ(result.get_real(), -74);
    EXPECT_DOUBLE_EQ(result.get_im(), -110);
}


