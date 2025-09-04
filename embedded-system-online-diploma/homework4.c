#include <stdio.h>
#include <string.h>

// EX1: Prime numbers calculation between two intervals
void prime_calc(int a, int b) {
    int i, j, isPrime;

    printf("Prime numbers between %d and %d are:\n", a, b);

    for (i = a; i <= b; i++) {
        if (i <= 1) continue;
        isPrime = 1;

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d\n", i);
    }
}

// EX2: Factorial calculation using recursion
void fact_calc(int r) {
    static int c = 0;
    static int fr = 1;  // Keep the value across recursive calls

    fr = fr * r;

    if (c == 0) {       // Store the original number only once
        c = r;
    }

    if (r < 0) {
        printf("ERROR: There is no factorial for negative numbers\n");
    }
    else if (r == 0) {
        printf("Factorial of 0 = 1\n");
    }
    else {
        r--;
        if (r != 0) {
            fact_calc(r);  // Recursive call
        }
        else {
            printf("The factorial of %d = %d\n", c, fr);
            fr = 1; // Reset for the next call
            c = 0;  // Reset the original number
        }
    }
}

// EX3: Reverse a string using recursion
void reverse(char str[]) {
    static int start = 0;
    static int end = -1;
    char temp;

    if (end == -1) {  // First call only
        end = strlen(str) - 1;
        if (str[end] == '\n') {  // Remove newline if present
            str[end] = '\0';
            end--;
        }
    }

    if (start >= end) {  // Stop condition
        printf("Reversed sentence: %s\n", str);
        start = 0;  // Reset for next call
        end = -1;
        return;
    }

    // Swap characters
    temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    start++;
    end--;

    reverse(str);  // Recursive call
}

// EX4: Power calculation using recursion
void power_calc(int base, int exp) {
    static int result = 1;     // Store the result
    static int original_base;  // Keep the original base
    static int original_exp;   // Keep the original exponent

    if (result == 1) {  // First call only
        original_base = base;
        original_exp = exp;
    }

    if (exp == 0) {  // Stop condition
        printf("%d^%d = %d\n", original_base, original_exp, result);
        result = 1;  // Reset for next call
        return;
    }

    result = result * base;        // Multiply by base
    power_calc(base, exp - 1);     // Recursive call
}

int main() {
    int low, high, s, r, q;
    char sen[100];

    // Prime numbers
    printf("Enter two numbers (intervals): ");
    fflush(stdout);
    scanf("%d %d", &low, &high);
    prime_calc(low, high);

    // Factorial
    printf("\nEnter an integer number: ");
    fflush(stdout);
    scanf("%d", &s);
    fact_calc(s);

    // Clear buffer before fgets
    while (getchar() != '\n');

    // Reverse string
    printf("\nEnter a sentence: ");
    fflush(stdout);
    fgets(sen, sizeof(sen), stdin);
    reverse(sen);

    // Power
    printf("\nEnter base number: ");
    fflush(stdout);
    scanf("%d", &r);

    printf("Enter power number (must be positive): ");
    fflush(stdout);
    scanf("%d", &q);
    power_calc(r, q);

    return 0;
}
