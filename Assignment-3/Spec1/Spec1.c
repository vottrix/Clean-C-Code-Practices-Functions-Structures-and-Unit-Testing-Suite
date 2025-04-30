
//JADEN MARDINI
// Write a function called SmallerOf(double, double) that replaces the contents
// of two double variables with the smaller of the two values.For example,
// SmallerOf(x, y) would reset both x and y to the smaller of the two.Please also
// prepare a set of unit tests written following the testing strategies(and tools)
// presented in this class or your Projects I course.Be sure to test(and include)
// all the edge cases you can think of to ensure your function works for all double
// variables.

#include "Spec1.h"
#include <stdio.h>

// this function checks which of the two values is smaller
// then, it sets both x and y to that smaller value
void SmallerOf(double* x, double* y)
{
    // find the smaller value using a ternary operator
    double smaller = (*x < *y) ? *x : *y;

    // set both variables to the smaller value
    *x = smaller;
    *y = smaller;
}

// the main function to test the SmallerOf function
int main()
{
    // test case 1: x = 6.0 and y = 12.0
    double x = 6.0, y = 12.0;
    SmallerOf(&x, &y);
    // print out the result; should be 6.0 for both x and y
    printf("x: %f, y: %f\n", x, y);     // the expected output: x: 6.0, y: 6.0

    // test case 2: Set new values for x and y
    x = 20.0;
    y = 9.0;
    SmallerOf(&x, &y);
    // should print 9.0 for both x and y
    printf("x: %f, y: %f\n", x, y);     // the expected output: x: 9.0, y: 9.0

    return 0;
}
