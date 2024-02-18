#include <gtest/gtest.h>
#include "../complex_numbers/complex_numbers.cpp"
using namespace std;

// constructors
TEST(complex_test, null_constr) {
    Complex_Number c_null = Complex_Number();
    EXPECT_EQ(c_null.get_real(), 1);
    EXPECT_EQ(c_null.get_im(), 0);
}

TEST(complex_test, constr) {
    Complex_Number c = Complex_Number(1, 5);
    EXPECT_EQ(c.get_real(), 1);
    EXPECT_EQ(c.get_im(), 5);
}

// operations
TEST(complex_test, addition_op) {
    Complex_Number c1 = Complex_Number(1, 5);
    Complex_Number c2 = Complex_Number(3, -2);
    Complex_Number result = c1 + c2;
    EXPECT_EQ(result.get_real(), 5);
    EXPECT_EQ(result.get_im(), 3);
}