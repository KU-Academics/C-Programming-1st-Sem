#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j = 1;
	i = j++; //value of i is assigned to j first and then increased to 2
	printf("%d %d\n", i, j);
	printf("%d %d\n", i++, ++j);
	printf("%d %d\n", ++i, j++);

	return 0;
}