#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b; //larger
	printf("enter first number; ");
	scanf("%d", &a);
	//printf("%d\n",a+=3);
	printf("enter second number: ");
	scanf("%d", &b);
	(a > b) ? (printf("%d is the larger number", a)) : (printf("%d is larger number", b));
	//larger = (a>b)?(a):(b);
	//printf("The larger number is %d",larger);
	return 0;
}