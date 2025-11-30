#include <stdio.h>
struct Sdistance
{
    int feet;
    float inch;

};


struct Sdistance add_dis(struct Sdistance sd1, struct Sdistance sd2) {
    struct Sdistance result;

    result.feet = sd1.feet + sd2.feet;
    result.inch = sd1.inch + sd2.inch;

    while (result.inch >= 12.0) {
        result.inch = result.inch - 12.0;
        result.feet++;
    }

    return result;
}
int main() {
    struct Sdistance dist1, dist2, sum;

    printf("Enter information for 1st distance\n");

    printf("Enter feet: ");
    fflush(stdout);
    scanf("%d", &dist1.feet);

    printf("Enter inch: ");
    fflush(stdout);
    scanf("%f", &dist1.inch);


    printf("\nEnter information for 2nd distance\n");
    printf("Enter feet: ");
    fflush(stdout);
    scanf("%d", &dist2.feet);

    printf("Enter inch: ");

    scanf("%f", &dist2.inch);


    sum = add_dis(dist1, dist2);
    fflush(stdout);
    printf("\nSum = %d\' - %.1f\"", sum.feet, sum.inch);

    return 0;
}