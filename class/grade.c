#include <stdio.h>
int main()
{
	int comp, phy, math, chem, bio;
	float per;

	/*taking input marks of five subjects from the user */
	printf("enter marks of five subjects: ");
	scanf("%d%d%d%d%d", &comp, &phy, &math, &chem, &bio);

	//calculatig percentage
	per = (comp + phy + math + chem + bio) / 5.0;
	printf("Your percentage is  %.2f\n", per);

	/*checking the obtained grade*/
	if (per > 100)
	{
		printf("Invalid percentage");
	}
	else if (per < 0)
	{
		printf("Invalid percentage");
	}
	else if (per >= 90)
	{
		printf("The obtained grade is A+, Excellent, ");
	}
	else if (per >= 80)
	{
		printf("The obtained grade is A, Keep it up");
	}
	else if (per >= 70)
	{
		printf("The obtained grade is B, Work harder");
	}
	else if (per >= 60)
	{
		printf("The obtained grade is C, Focus on your studies");
	}
	else if (per >= 50)
	{
		printf("The obtained grade is D , Study harder");
	}
	else
	{
		printf("The obtained grade is F, You've failed the exam ");
	}

	return 0;
}