//fibonassi with no argument and no return type
#include <stdio.h>
void fib();
int main()
{
	fib();
	return 0;
}
void fib()
{
	int a = 0, b = 1, c = 0;
	int x, n;
	//taking input from the user
	printf("enter number of terms you want to display:");
	scanf("%d", &n);
	if (n == 1)
	{
		printf("%d\n", a);
	}
	else if (n > 0)
	{
		printf("%d\n%d\n", a, b);
		for (x = 0; x < n - 2; x++)
		{
			c = (a + b);
			//printf("%d\n",c);
			a = b;
			b = c;
			printf("%d\n", c);
		}
		//printf("%d\n", c);
	}
	else
	{
		printf("Not a valid no.\n");
	}
}