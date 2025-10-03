#include <stdio.h>

int main() {
    double a, b;
    printf("Enter first number: ");
    scanf("%lf", &a);
    printf("Enter second number: ");
    scanf("%lf", &b);
    printf("Sum\t= %lf\n", a+b);
    printf("Difference\t= %lf\n", a-b);
    printf("Product\t= %lf\n", a*b);
    return 0;
}
