#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	printf("enter a number: ");
	scanf("%d", &a);
	if (a == 5)
	{
		printf("a equals 5");
	}
	else if (a < 5)
	{
		printf("a is less than 5");
	}
	else
	{
		printf("a is greater than 5");
	}
	printf("\na= %d", a);
	return 0;
}
