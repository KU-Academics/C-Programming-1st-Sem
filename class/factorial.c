#include <stdio.h>
#include <stdlib.h>
int main()
{
	int fact = 1, i, n;
	printf("enter the number whose factorial you wish to find: ");
	scanf("%d", &n);
	if (n >= 0)
	{
		for (i = 1; i <= n; ++i)
		{
			fact *= i;
		}
		printf("the factorial of given number %d is %d.", n, fact);
	}
	else
	{
		printf("the factorial of %d is ∞.", n);
	}
}