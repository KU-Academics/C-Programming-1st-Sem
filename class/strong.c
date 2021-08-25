#include <stdio.h>

int main()
{
	int x, i, n, num, rem, fact, value = 0;
	printf("enter the number you wish to check: ");
	scanf("%d", &num);
	if (num == 0)
	{
		printf("It is not a strong number");
	}
	n = num;

	for (x = n; x > 0; x /= 10)
	{
		rem = n % 10;
		fact = 1;
		for (i = 1; i <= rem; ++i)
		{
			fact = fact * i;
		}
		value += fact;
		n /= 10;
	}

	if (value == num)
	{
		printf("It is a strong number");
	}
	else
	{
		printf("It is not a strong number");
	}

	return 0;
}