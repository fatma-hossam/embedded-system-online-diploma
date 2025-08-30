#include <stdio.h>
#include <stdlib.h>
int main() {
    // arrays homework
    // EX 1

    float A[2][2], B[2][2], C[2][2];
    int a, b;

    printf("Please enter the elements of the 1st matrix\n");
    fflush(stdout);
    for (a = 0; a < 2; a++) {
        for (b = 0; b < 2; b++) {
            printf("Please enter A[%d][%d]:\n ", a + 1, b + 1);
            fflush(stdout);
            scanf("%f", &A[a][b]);
        }
    }

    printf("Please enter the elements of the 2st matrix\n");
    fflush(stdout);
    for (a = 0; a < 2; a++) {
        for (b = 0; b < 2; b++) {
            printf("Please enter B[%d][%d]: \n", a + 1, b + 1);
            fflush(stdout);
            scanf("%f", &B[a][b]);
        }
    }
    for (a = 0; a < 2; a++) {
        for (b = 0; b < 2; b++) { C[a][b] = A[a][b] + B[a][b]; }
    }
    printf("the sum of the two matrices is :\n");
    for (a = 0; a < 2; a++) {
        for (b = 0; b < 2; b++) { printf("%f  ", C[a][b]); }
        printf("\n");
    }
    //EX 2
    float arr[100], avr = 0;
    int n;
    printf("please enter the number of data : \n");
    fflush(stdout);
    scanf("%d", &n);
    if (n > 100 || n <= 0) {
        printf("Invalid number! , the max is 100 \n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("%d . please enter the number : \n", i + 1);
        fflush(stdout);
        scanf("%f", &arr[i]);
        avr = avr + arr[i];
    }
    avr = avr / n;
    printf("the average is = %f ", avr);
    //EX 3
    float ar[100][100], tr[100][100];
    int r, f, i, j;
    printf("please enter the number of rows and the columns : \n");
    fflush(stdout);
    scanf("%d %d", &r, &f);

    for (i = 0; i < r; i++) {
        for (j = 0; j < f; j++) {
            printf("Please enter A [%d][%d]:\n ", i + 1, j + 1);
            fflush(stdout);
            scanf("%f", &ar[i][j]);
        }
    }
    printf("the entered matrix is :\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < f; j++) { printf("%f  ", ar[i][j]); }
        printf("\n");
    }
    for (i = 0; i < r; i++) {
        for (j = 0; j < f; j++) { tr[j][i] = ar[i][j]; }
    }
    printf("the transpose of the matrix is :\n");
    for (i = 0; i < f; i++) {
        for (j = 0; j < r; j++)
        {
            printf("%f  ", tr[i][j]);
        }
        printf("\n");
    }
    //EX4
    float rr[100], e;
    int q, t;


    printf("Please enter the number of elements: ");
    fflush(stdout);
    scanf("%d", &q);

    for (int i = 0; i < q; i++) {
        printf("Enter element %d: ", i + 1);
        fflush(stdout);
        scanf("%f", &rr[i]);
    }

    printf("Current array: ");
    fflush(stdout);
    for (int i = 0; i < q; i++) {
        printf("%.2f ", rr[i]);
        fflush(stdout);
    }
    printf("\n");
    printf("Please enter the element to insert: ");
    fflush(stdout);
    scanf("%f", &e);
    printf("Enter the location (1 to %d): ", q + 1);
    fflush(stdout);
    scanf("%d", &t);
    fflush(stdout);

    if (t < 1 || t > q + 1) {
        printf("Invalid location!\n");
        return 1;
    }

    for (int i = q; i >= t; i--) {
        rr[i] = rr[i - 1];
    }
    rr[t - 1] = e;
    q++;

    printf("Array after insertion: ");
    for (int i = 0; i < q; i++) {
        printf("%.2f ", rr[i]);
    }
    printf("\n");

    //EX5

    float x[100], m;
    int k;


    printf("Please enter the number of elements: ");
    fflush(stdout);
    scanf("%d", &k);

    printf("Enter the elements\n");
    for (int i = 0; i < k; i++) {

        fflush(stdout);
        scanf("%f", &x[i]);
    }
    fflush(stdout);
    for (int i = 0; i < k; i++) {
        printf("%.2f ", x[i]);
        fflush(stdout);
    }
    printf("\n");
    printf("enter the element to be searched\n");
    fflush(stdout);
    scanf("%f", &m);
    int ff = 0;
    for (int i = 0; i < k; i++) {
        if (x[i] == m) {
            printf("%f is found at location %d \n", x[i], i + 1);
            ff = 1;
        }
    }
    if (!ff) { printf("not founded"); }
    return 0;
}