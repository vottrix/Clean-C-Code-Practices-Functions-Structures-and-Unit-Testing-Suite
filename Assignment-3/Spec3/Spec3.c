
//JADEN MARDINI

//Write a function that sets each element in an array to the product of the
//corresponding elements in two other arrays.For example, if array 1 has the
//values{ 2, 4, 5, 8 } and array 2 has the values{ 1, 0, 4, 6 }, the function
//should assign array 3 the values{ 2, 0, 20, 48 } . The name of this function
//should be named MultiplyTwoArraysIntoThird and the arrays should be sent as
//function parameters.Please also prepare a set of unit tests written following
//the testing strategies(and tools) presented in this class or your Projects I
//course.Be sure to include all the tests you performed to demonstrate that
//this function works as specified.

#include "Spec3.h"
#include <stdio.h>

// this function multiplies elements from arr1 and arr2 and stores the result in arr3
void MultiplyTwoArraysIntoThird(const double arr1[], const double arr2[], double arr3[], int size)
{
    // loop through each element and multiply corresponding elements from arr1 and arr2
    for (int i = 0; i < size; ++i)
    {
        arr3[i] = arr1[i] * arr2[i];        // store the result in arr3
    }
}

// the main function to test MultiplyTwoArraysIntoThird
int main()
{
    // test 1: mixed values in both arrays
    double arr1[] = { 3.0, 5.0, 7.0, 9.0 };         // first input array
    double arr2[] = { 2.0, 0.0, 4.0, 6.0 };         // second input array
    double arr3[4];         // result array
    int size = 4;
    MultiplyTwoArraysIntoThird(arr1, arr2, arr3, size);
    printf("Result of Test Case 1: ");
    for (int i = 0; i < size; ++i)
    {
        printf("%f ", arr3[i]);         // expected output: 6.0 0.0 28.0 54.0
    }
    printf("\n");

    // test 2: negative and positive values
    double arr4[] = { -3.0, 4.0, -5.0, 6.0 };       // first input array with negative values
    double arr5[] = { 2.0, -3.0, 5.0, -4.0 };       // second input array with mixed values
    double arr6[4];
    MultiplyTwoArraysIntoThird(arr4, arr5, arr6, size);
    printf("Result of Test Case 2: ");
    for (int i = 0; i < size; ++i)
    {
        printf("%f ", arr6[i]);         // expected output: -6.0 -12.0 -25.0 -24.0
    }
    printf("\n");

    // test 3: all zero values
    double arr7[] = { 0.0, 0.0, 0.0, 0.0 };         // first input array is all zeros
    double arr8[] = { 7.0, 8.0, 9.0, 10.0 };        // second input array with positive values
    double arr9[4];
    MultiplyTwoArraysIntoThird(arr7, arr8, arr9, size);
    printf("Result of Test Case 3: ");
    for (int i = 0; i < size; ++i)
    {
        printf("%f ", arr9[i]);         // expected output: 0.0 0.0 0.0 0.0
    }
    printf("\n");

    return 0;
}
