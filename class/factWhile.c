#include <stdio.h>
#include <stdlib.h>
int main()
{
	int fact = 1, i = 1, n;
	printf("enter the number you wish to find the factorial of: ");
	scanf("%d", &n);
	if (n >= 0)
	{
		do
		{
			fact *= i;
			i += 1;
		} while (i <= n);
		printf("the factorial of %d is %d.", n, fact);
	}
	else
	{
		printf("the factorial of %d is ∞.\n", n);
	}
}