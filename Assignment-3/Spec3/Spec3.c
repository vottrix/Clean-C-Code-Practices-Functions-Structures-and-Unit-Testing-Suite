
#include "Spec3.h"
#include <stdio.h>

void MultiplyTwoArraysIntoThird(const double arr1[], const double arr2[], double arr3[], int size) {
    if (!arr1 || !arr2 || !arr3 || size <= 0) return;
    
    for (int i = 0; i < size; i++) {
        arr3[i] = arr1[i] * arr2[i];
    }
}

static void print_array(const double arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%.1f ", arr[i]);
    }
    printf("\n");
}

int main() {
    const int size = 4;
    
    double arr1[] = {3.0, 5.0, 7.0, 9.0};
    double arr2[] = {2.0, 0.0, 4.0, 6.0};
    double arr3[4];
    MultiplyTwoArraysIntoThird(arr1, arr2, arr3, size);
    printf("Test 1 result: ");
    print_array(arr3, size);

    double arr4[] = {-3.0, 4.0, -5.0, 6.0};
    double arr5[] = {2.0, -3.0, 5.0, -4.0};
    double arr6[4];
    MultiplyTwoArraysIntoThird(arr4, arr5, arr6, size);
    printf("Test 2 result: ");
    print_array(arr6, size);

    double arr7[] = {0.0, 0.0, 0.0, 0.0};
    double arr8[] = {7.0, 8.0, 9.0, 10.0};
    double arr9[4];
    MultiplyTwoArraysIntoThird(arr7, arr8, arr9, size);
    printf("Test 3 result: ");
    print_array(arr9, size);

    return 0;
}
