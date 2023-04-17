#include <stdio.h>

void multipleValues(int num1, int num2, int* sum, int* difference, int* product);

int main()
{
    int num1, num2, sum, difference, product;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    multipleValues(num1, num2, &sum, &difference, &product);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);

    return 0;
}

void multipleValues(int num1, int num2, int* sum, int* difference, int* product)
{
    *sum = num1 + num2;
    *difference = num1 - num2;
    *product = num1 * num2;
}
