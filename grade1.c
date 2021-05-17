#include <stdio.h>
int main()
{
	//declaring the variables
	float marks;
	char grade[500];

	//taking marks as input from the user and printing it
	printf("enter your marks: ");
	scanf("%f", &marks);
	printf("you have entered %.2f\n", marks);

	//checki>ng the grades
	if (marks > 100 && marks < 0)
	{
		char grade[500] = "invalid";
	}
	else if (marks>= 90 && marks <= 100)
	{
		char grade[500] = "A";
	}
	else if (marks>= 75 && marks<90)
	{
		char grade[500] = "B";
	}
	else if (marks>=65 && marks<80)
	{
		char grade[500] = "C";
	}
	else if (marks>=50 && marks<65)
	{
		char grade[500] = "D";
	}
	else{
		char grade[500] = "F";
	}
	printf("And the grade you obtained is %s\n",grade);

	return 0;


}
