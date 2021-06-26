#include <stdio.h>
int main()
{
	int i, num, sum = 0;

	for (i = 1; i <= 10; i++)
	{
		printf("Enter a number: ");
		scanf("%d", &num);

		if (num < 0)
		{
			continue;
		}

		sum += num;
	}

	printf("The sum of the given numbers is %d", sum);

	return 0;
}