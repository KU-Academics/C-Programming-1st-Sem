//with return type but no arguments

#include <stdio.h>
int add();
int main()
{
	//printf("%d\n", add());
	int sum = add();
	printf("%d", sum);
	return 0;
}
int add()
{
	int a, b;
	printf("enter two numbers: ");
	scanf("%d%d", &a, &b);
	int sum = a + b;
	return sum;
}