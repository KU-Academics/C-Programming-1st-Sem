//with return type and with argument

#include <stdio.h>
int add(int a, int b)
{

	int sum = a + b;
	return sum;
}
int main()
{
	int a, b;
	printf("enter two numbers: ");
	scanf("%d%d", &a, &b);
	printf("The sum is %d\n", add(a, b));

	return 0;
}