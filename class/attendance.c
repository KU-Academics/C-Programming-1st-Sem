#include <stdio.h>
int main()
{
	int a, tm, passmarks = 500;
	printf("enter your present days");
	scanf("%d", &a);

	if (a > 80)
	{
		printf("enter your totalmarks:");
		scanf("%d", &tm);
		if (tm > passmarks)
			printf("Well done boy!you have passed the exam");
		else
			printf("you have failed the exam");
	}
	else
		printf(" you have less attendance than needed");
}