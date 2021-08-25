#include <stdio.h>
//checking if the given number is perfect

int main()
{
	int n, i, sum = 0, r;
	printf("enter a number to check for the perfect number: ");
	scanf("%d", &n);
	for (i = 1; i < n; i++)
	{
		r = n % i;
		if (r == 0)
		{
			sum += i;
			//printf("%d", sum);
		}
	}

	if (sum == n)
	{
		printf("The given number is a perfect number.");
	}
	else
	{
		printf("The given number is not a perfect number.");
	}
	return 0;
}