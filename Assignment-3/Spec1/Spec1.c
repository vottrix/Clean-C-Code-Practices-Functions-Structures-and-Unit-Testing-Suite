
#include "Spec1.h"
#include <stdio.h>

void SmallerOf(double* x, double* y) {
    if (!x || !y) return;
    
    double smaller = (*x < *y) ? *x : *y;
    *x = *y = smaller;
}

int main() {
    double x = 6.0, y = 12.0;
    SmallerOf(&x, &y);
    printf("x: %.1f, y: %.1f\n", x, y);

    x = 20.0;
    y = 9.0;
    SmallerOf(&x, &y);
    printf("x: %.1f, y: %.1f\n", x, y);

    return 0;
}
