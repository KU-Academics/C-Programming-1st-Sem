#include <stdio.h>
int main()
{
	int a;
	printf("enter a number: ");
	scanf("%d", &a);
	//checking if the given no is odd or even
	if (a == 0)
	{
		printf("%d is neither odd nor even\n", a);
	}

	else if (a % 2 == 0)
	{
		printf("%d is even number\n", a);
	}
	else
	{
		printf("%d is odd number\n", a);
	}
}