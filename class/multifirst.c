#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, i = 1, multi = 1;
	printf("Make clear the multiplication of how many numbers you want: ");
	scanf("%d", &n);
	while (i <= n)
	{
		multi *= i;
		i++;
	}
	printf("the multiplication of first %d numbers is %d.", n, multi);
	return 0;
}