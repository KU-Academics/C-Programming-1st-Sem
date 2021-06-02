#include <stdio.h>
#include <stdlib.h>
int main()
{
	char operator;
	float a, b;

	/*printf("Enter an operator (+, -, *,/): ");
	scanf("%c", &operator);
	printf("Enter two operands: ");
	scanf("%f %f", &a, &b);*/

	printf("Enter two operands: ");
	scanf("%f %f", &a, &b);
	printf("Enter an operator (+, -, *,/): ");
	scanf("%s", &operator);

	switch (operator)
	{
	case '+':
		printf("the sum is %.2f + %.2f = %.2f", a, b, a + b);
		break;

	case '-':
		printf("the subtraction is %.2f - %.2f = %.2f", a, b, a - b);
		break;

	case '*':
		printf("the product is %.2f * %.2f = %.2f", a, b, a * b);
		break;

	case '/':
		printf("the division is %.2f / %.2f = %.2f", a, b, a / b);
		break;
		
		// if operator doesn't match any case constant
	default:
		printf("Error! operator is not correct");
		break;
	}

	return 0;
}