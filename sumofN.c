#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num, i;
	int sum = 0;
	printf("enter the number up to which you want to perform addition: ");
	scanf("%d", &num);
	for (i = 1; i <= num; ++i)
	{
		sum += i;
	}
	printf("sum up to given %d numbers is %d.", num, sum);
	return 0;
}