#include <stdio.h>
#include <stdlib.h>
int main()
{
	char single;
	printf("enter a single character: ");
	scanf("%c", &single);

	switch (single)
	{
	case 'x':
		printf("x\n");
		break;
	case 'y':
		printf("y\n");
		break;
	case 'z':
		printf("z\n");
		break;
	default:
		printf("other than x, y and z\n");
		break;
	}
	return 0;
}