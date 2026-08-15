#include <stdio.h>
#include "calculator.h"

int main()
{
    printf("Add: %d\n", add(10, 5));
    printf("Subtract: %d\n", subtract(10, 5));
    printf("Multiply: %d\n", multiply(10, 5));
    printf("Divide: %.2f\n", divide(10, 5));

    return 0;
}