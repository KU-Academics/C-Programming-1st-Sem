#include <stdio.h>
#include <stdlib.h>
int main()
{
	int per;
	printf("enter your percentage: ");
	scanf("%d", &per);

	switch (per / 10)
	{
	case 9:
		printf("Your grade is A\n");
		break;

	case 8:
		printf("Your grade is A-\n");
		break;

	case 7:
		printf("Your grade is B");
		break;
	case 6:
		printf("Your grade is B-");
		break;
	case 5:
		printf("Your grade is C");
		break;
	case 0:
		printf("You have failed the exam");
		break;
	default:
		printf("Error:Invalid input");
		break;
	}

	return 0;
}