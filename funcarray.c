// #include <stdio.h>

// int main()
// {
// 	int arr[5] = {1, 2, 3, 4, 5}; // arr[0]=1 arr[1]=2 arr[2]=3.....
// 	for (int i = 0; i < 5; i++)
// 	{
// 		printf("arr[%d]= %d\t", i, arr[i]);
// 	}
// 	return 0;
// }

#include <stdio.h>

int main()
{
	int n;
	printf("enter the size of the array: ");
	scanf("%d", &n);
	int arr[n];
	printf("enter the array elements: ");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	// n=10
	for (int i = 0; i < n; i++)
	{
		printf("arr[%d]=%d\t", i, arr[i]);
	}
	return 0;
}