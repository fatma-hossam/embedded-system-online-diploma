#include <stdio.h>
struct Sstudent_info
{
	char name[50];
	int roll_num;
	float degree;
};
int main()
{
	//Q1
	struct Sstudent_info s1;
	printf("Enter the students informations : \n");
	printf("enter name\n");
	fflush(stdout);
	fgets(s1.name, 50, stdin);
	printf("enter roll number\n");
	fflush(stdout);
	scanf("%d", &s1.roll_num);
	printf("enter marks\n");
	fflush(stdout);
	scanf("%f", &s1.degree);

	printf("displaying informations : \n");
	printf("name : %s", s1.name);
	printf("roll number : %d\n", s1.roll_num);
	printf("marks : %.2f\n", s1.degree);

	return 0;
}