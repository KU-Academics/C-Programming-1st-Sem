#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num;
	printf("enter any number from 1-7: ");
	scanf("%d", &num);

	switch (num)
	{
	case 1:
		printf("Sunday\n");
		break;
	case 2:
		printf("Monday\n");
		break;
	case 3:
		printf("Tuesday\n");
		break;
	case 4:
		printf("Wednesday\n");
		break;
	case 5:
		printf("Thursday\n");
		break;
	case 6:
		printf("Friday\n");
		break;
	case 7:
		printf("Saturday\n");
		break;
	default:
		printf("Not available\n");
	}
}