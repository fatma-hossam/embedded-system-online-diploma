//EX1
#include<stdio.h>
int main()
{
	printf("hello ,i'm fatma...\n");
	fflush(stdout);

	//EX2
	int a;
	printf("please enter an integer number...\n");
	fflush(stdout);
	scanf("%d", &a);
	printf("the integer number you entered is : %d\n", a);
	//EX3
	int c, d, sum;
	printf("please enter the two integer numbers...\n");
	fflush(stdout);
	scanf("%d%d", &c, &d);
	sum = c + d;
	printf("the sum of the two integer numbers you entered is : %d\n", sum);
	//EX4
	float e, f, mul;
	printf("please enter two real numbers...\n");
	fflush(stdout);
	scanf("%f%f", &e, &f);
	mul = e * f;
	printf("the product of the two real numbers you entered is : %f\n", mul);
	fflush(stdout);
	//EX5
	char g;
	printf("please enter the character...\n");
	fflush(stdout);
	scanf(" %c", &g);
	printf("the ASCI  number of the character '%c' you entered is :%d\n", g, g);
	//EX6
	float h, i, j;
	printf("please enter the first 'A' number you want to swap...\n");
	fflush(stdout);
	scanf("%f", &h);
	printf("please enter the second 'B' number you want to swap...\n");
	fflush(stdout);
	scanf("%f", &i);
	j = i;
	i = h;
	h = j;
	printf("the numbers after swapping is: \n'A =%f'\n'B =%f'\n", h, i);
	//EX7
	float k, l;
	printf("please enter the first 'A' number you want to swap...\n");
	fflush(stdout);
	scanf("%f", &k);
	printf("please enter the second 'B' number you want to swap...\n");
	fflush(stdout);
	scanf("%f", &l);
	k = k + l;
	l = k - l;
	k = k - l;
	printf("the numbers after swapping is: \n'A =%f'\n'B =%f'\n", k, l);
	//second method
	float m, n;
	printf("please enter the first 'A' number you want to swap...\n");
	fflush(stdout);
	scanf("%f", &m);
	printf("please enter the second 'B' number you want to swap...\n");
	fflush(stdout);
	scanf("%f", &n);
	printf("the numbers after swapping is: \n'A =%f'\n'B =%f'\n", n, m);
	return 0;
}