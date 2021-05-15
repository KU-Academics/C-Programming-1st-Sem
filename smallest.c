#include <stdio.h>
int main()
{
	double a, b, c;
	printf("enter any three numbers: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a < b)
	{
		if (a < c)
			printf("the smallest number is %.2f", a);
		else
			printf("the smallest number is %.2f", c);
	}
	else
	{
		if (b < c)
			printf("the smallest number is %.2f", b);
		else
			printf("the smallest number is %.2f", c);
	}
}