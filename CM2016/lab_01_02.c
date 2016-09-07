#include <stdio.h>
void main() {
    char c1 = 110,
    c2 = 't';
    printf("c1 = %d \n", c1);
    printf("c1 = %c \n", c1);
    printf("c2 = %d \n", c2);
    const int coef = 2016;
    double a = 1005.23125478965,
    b = 5.347;
    printf("%7d \n", coef);
    printf("%7.1lf \n", b);
    printf("A = %.7lf \n", a);
    printf("B = %.3lf \n", b);
    printf("A = %5.7lf \n", a);
    printf("B = %7.1lf \n", b);
    printf("%7d \n", coef);
    
}