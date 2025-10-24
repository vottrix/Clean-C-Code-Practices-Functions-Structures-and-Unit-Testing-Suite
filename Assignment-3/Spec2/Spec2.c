
#include "Spec2.h"
#include <stdio.h>

double SumOfMinMax(const double arr[], int size) {
    if (!arr || size <= 0) return 0.0;
    
    double min = arr[0];
    double max = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    
    return min + max;
}

int main() {
    double array1[] = {6.0, 12.0, 18.0, 24.0, 30.0};
    printf("Sum of Min and Max: %.1f\n", SumOfMinMax(array1, 5));

    double array2[] = {-4.4, -2.8, -6.9, -3.3, -1.7};
    printf("Sum of Min and Max: %.1f\n", SumOfMinMax(array2, 5));

    double array3[] = {14.5};
    printf("Sum of Min and Max: %.1f\n", SumOfMinMax(array3, 1));

    printf("Sum of Min and Max (empty): %.1f\n", SumOfMinMax(NULL, 0));

    return 0;
}
