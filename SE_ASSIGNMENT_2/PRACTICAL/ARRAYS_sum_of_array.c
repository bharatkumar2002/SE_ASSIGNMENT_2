#include<stdio.h>
void main()
{
	int arr[30], size, i , sum=0;

	printf("\n\n\t enter size of array :");
	scanf("%d", &size);

	for (i = 0;i < size;i++)
	{
		printf("\n\t enter elements [%d] :", i);
		scanf("%d", &arr[i]);
	}
	for (i = 0;i < size;i++)
	{
		printf("\n\t your elements in array [%d] : %d\n", i, arr[i]);
		sum = sum + arr[i];
		printf("\n\t sum of  array elements : %d", sum);	
	}
}

