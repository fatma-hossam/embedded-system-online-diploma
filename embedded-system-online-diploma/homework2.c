//EX1
#include <stdio.h>
int main() {
	int k;
	printf("Please enter the integer number you want to check if odd or even:\n");
	fflush(stdout);
	scanf("%d", &k);

	if (k % 2 == 0) { printf("%d is even\n", k); }
	else { printf("%d is odd\n", k); }
	//EX2
	char c;
	printf("Enter the alphapet\n ");
	fflush(stdout);
	scanf(" %c", &c);
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
		c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
		printf("%c is a vowel\n", c);
	}
	else {
		printf("%c is a consonant\n", c);
	}
	//EX3
	float a, b, d;
	printf("Enter the three numbers to check the largest one \n ");
	fflush(stdout);
	scanf("%f %f %f", &a, &b, &d);
	if (a >= b && a >= d)
		printf("%f is the largest number \n", a);
	else if (b >= a && b >= d)
		printf("%f is the largest number \n", b);
	else if (d >= a && d >= b)
		printf("%f is the largest number \n", d);
	//EX4
	float f;
	printf("Enter the number to check it's positive or negative \n ");
	fflush(stdout);
	scanf("%f", &f);
	if (f > 0)
		printf("%f is positive number \n", f);
	else if (f < 0)
		printf("%f is negative number \n", f);
	else if (f == 0)
		printf("%f is zero \n", f);
	//EX5
	char p;
	printf("Enter the character\n ");
	fflush(stdout);
	scanf(" %c", &p);
	if ((p < 97 || p>122) && (p < 65 || p>90)) {
		printf("%c is not an alphabet \n", p);
	}
	else {
		printf("%c is an alphabet \n", p);
	}
	//EX6
	int i, sum;
	sum = 0;
	printf("enter an integer number\n ");
	fflush(stdout);
	scanf("%d", &i);
	for (int j = 0; j <= i; j++)
	{
		sum = sum + j;
	}
	printf("the sum = %d\n", sum);
	//EX7
	int r, fr = 1;
	printf("Enter the integer number \n");
	fflush(stdout);
	scanf("%d", &r);

	if (r > 0) {
		for (int i = 1; i <= r; i++) {
			fr = fr * i;
		}
		printf("The factorial of %d = %d\n", r, fr);
	}
	else if (r < 0) {
		printf("ERROR: There is no factorial for negative numbers \n");
	}
	else if (r == 0) {
		printf("Factorial of 0 = 1\n");
	}

	//EX8
	float w, q, v;
	char t;
	printf("enter operator symbol either add '+' or subtract '-' or multiply'*' or divide '/' \n ");
	fflush(stdout);
	scanf(" %c", &t);
	printf("please enter the two operands\n");
	fflush(stdout);
	scanf("%f %f", &w, &q);
	if (t == '+') { v = w + q; printf("'%f + %f = %f'", w, q, v); }
	else if (t == '-') { v = w - q; printf("'%f - %f = %f'", w, q, v); }
	else if (t == '*') { v = w * q; printf("'%f * %f = %f'", w, q, v); }
	else if (t == '/') {
		if (q != 0) {
			v = w / q;
			printf("'%f ÷ %f = %f'", w, q, v);
		}
		else {
			printf("Error: division by zero!\n");
		}
	}
	return 0;
}