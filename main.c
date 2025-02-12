#include <stdio.h>
#include "math_operations.h"

int main() {
    int x = 10, y = 5;

    printf("Addition: %d\n", add(x, y));
    printf("Soustraction: %d\n", subtract(x, y));
    printf("Multiplication: %d\n", multiply(x, y));
    printf("Division: %.2f\n", divide(x, y));

    return 0;
}
