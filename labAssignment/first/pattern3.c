// #include <stdio.h>

// int main()
// {
// 	int i, j;
// 	for (i = 2; i <= 10; i += 2)
// 	{
// 		for (j = 2; j <= i; j += 2)
// 		{
// 			printf("%d", j);
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }
// better one
#include <stdio.h>

int main()
{
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 2; j <= i * 2; j += 2)
		{
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}