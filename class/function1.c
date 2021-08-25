
#include <stdio.h>
void fact();
int main()
{
	fact();
	return 0;
}
void fact()
{
	int i, n, fact = 1;
	printf("enter the number to find the factorial: ");
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