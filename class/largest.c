#include <stdio.h>

int main()
{
	int n;
	printf("enter the size of array: ");
	scanf("%d", &n);

	int arr[n];
	printf("enter the array elements: ");

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	int greatest = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > greatest)
		{
			greatest = arr[i];
		}
	}
	//for (i=1; i<n; i++)
	//if (arr[0]<arr[i])
	//arr[0] = arr[i];
	//printf("the greatest among given numbers is %d", arr[0])
	printf("greatest among given numbers is %d\n", greatest);

	return 0;
}