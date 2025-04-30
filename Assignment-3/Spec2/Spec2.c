
//JADEN MARDINI - PROG71990 - Assignment 3 - Student# 8762993

// Write a function that returns the sum (addition) of the largest and the smallest
// elements of an array of doubles.You may choose an appropriate name for your
// function. Please also prepare a set of unit tests written following the testing
// strategies(and tools) presented in this class or your Projects I course.Be
// sure to test(and include) all the edge cases you can think of to ensure your
// function works for all float variables.

#include "Spec2.h"
#include <stdio.h>

// this function finds the smallest and largest numbers in the array.
// it returns the sum of those two values
double SumOfMinMax(const double arr[], int size)
{
    if (size <= 0)          //check for an empty array
    {
        return 0;           //if the array is empty, return 0
    }

    // initialize min and max to the first element
    double min = arr[0];
    double max = arr[0];

    // loop through the array to find the smallest and largest values
    for (int i = 1; i < size; ++i)
    {
        if (arr[i] < min)       //found a new minimum
        {
            min = arr[i];
        }
        if (arr[i] > max)       //found a new maximum
        {
            max = arr[i];
        }
    }

    return min + max;           //return the sum of the smallest and largest numbers
}

// the main function for testing SumOfMinMax
int main()
{
    // test 1: an array with positive values
    double array1[] = { 6.0, 12.0, 18.0, 24.0, 30.0 };
    int size1 = 5;
    double result1 = SumOfMinMax(array1, size1);
    printf("Sum of Min and Max in array1: %f\n", result1);          // expected: 6.0 + 30.0 = 36.0

    // test 2: an array with negative values
    double array2[] = { -4.4, -2.8, -6.9, -3.3, -1.7 };
    int size2 = 5;
    double result2 = SumOfMinMax(array2, size2);
    printf("Sum of Min and Max in array2: %f\n", result2);          // expected: -6.9 + (-1.7) = -8.6

    // test 3: an array with one element
    double array3[] = { 14.5 };         // only one element
    int size3 = 1;
    double result3 = SumOfMinMax(array3, size3);
    printf("Sum of Min and Max in array3: %f\n", result3);          // expected: 14.5 + 14.5 = 29.0

    // test 4: an empty array
    double* array4 = NULL;              // no elements in the array
    int size4 = 0;
    double result4 = SumOfMinMax(array4, size4);
    printf("Sum of Min and Max in array4: %f\n", result4);          // expected: 0.0

    return 0;
}
