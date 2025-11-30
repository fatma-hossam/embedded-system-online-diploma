//Q5
#include <stdio.h>
#define PI 3.14159
#define AREA(r) (PI * (r) * (r))
int main() {
    float radius, result;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    result = AREA(radius);
    printf("Area=%.2f", result);
    return 0;
}
//Q6
//size of union = 32
//size of structure = 40