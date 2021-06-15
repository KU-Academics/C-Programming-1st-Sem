#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x = 5, y = 7;
	printf("%d\n", x++); //5 is displayed then x is increased to 6.
	printf("%d\n", ++y); //y is increased to 6 and then it is displayed.

	return 0;
}