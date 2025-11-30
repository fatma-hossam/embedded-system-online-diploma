#include <stdio.h>
struct Scomplex
{
    float real;
    float imag;

};


struct Scomplex sum_comp(struct Scomplex s1, struct Scomplex s2) {
    struct Scomplex sum;

    sum.real = s1.real + s2.real;
    sum.imag = s1.imag + s2.imag;



    return sum;
}
int main() {
    struct Scomplex s1, s2, sum;

    printf(" for 1st number\n");

    printf("Enter real part: ");
    fflush(stdout);
    scanf("%f", &s1.real);

    printf("Enter imaginary part: ");
    fflush(stdout);
    scanf("%f", &s1.imag);
    printf(" for 2st number\n");

    printf("Enter real part: ");
    fflush(stdout);
    scanf("%f", &s2.real);

    printf("Enter imaginary part: ");
    fflush(stdout);
    scanf("%f", &s2.imag);


    sum = sum_comp(s1, s2);
    fflush(stdout);
    printf("%f =%f i", sum.real, sum.imag);

    return 0;
}