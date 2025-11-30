#include <stdio.h>
struct Sstudent_info
{
	char name[50];
	int roll_num;
	float degree;
};
int main()
{

	struct Sstudent_info s1[10];
	printf("Enter the students informations : \n\n");
	for (int i = 0; i < 10; i++) {

		printf("for roll number %d\n", i + 1);
		printf("enter name\n");
		fflush(stdout);
		fgets(s1[i].name, 50, stdin);
		printf("enter marks\n");
		fflush(stdout);
		scanf("%f", &s1[i].degree);
		getchar();
	}
	printf("displaying informations : \n");
	for (int i = 0; i < 10; i++) {

		printf("information for roll number : %d\n", i + 1);
		printf("name : %s", s1[i].name);
		printf("marks : %.2f\n", s1[i].degree);
	}
	return 0;
}
