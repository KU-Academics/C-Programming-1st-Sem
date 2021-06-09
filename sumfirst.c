#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, n, sum = 0;
	printf("Make clear the sum of how many numbers you want? : ");
	scanf("%d", &n);
	for (i = 1; i <= 2 * n; i = i + 2)
	{
		sum += i;
	}
	printf("the sum of first %d odd numbers is %d\n", n, sum);

	return 0;
}