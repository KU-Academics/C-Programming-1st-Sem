#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 2, n;
	int sum = 0;
	printf("enter a natural number: ");
	scanf("%d", &n);
	while (i <= n)
	{
		sum += i;
		i = i + 2;
	}
	printf("the sum of given n natural even numbers is %d.", sum);

	return 0;
}