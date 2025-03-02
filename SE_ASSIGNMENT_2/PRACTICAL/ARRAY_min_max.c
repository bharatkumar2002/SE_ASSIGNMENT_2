#include<stdio.h>
void main()
{
	int arr[30], size, i,num,status=0,high=0;
	printf("\n\n\t enter size of array :");
	scanf("%d", &size);
	for (i = 0;i < size;i++)
	{
		printf("\n\n\t enter array element arr[%d] :", i);
		scanf("%d", &arr[i]);
	}
	for (i = 0;i < size;i++)
	{
		printf("\n\n\t your array element arr[%d] is : %d", i, arr[i]);
	}
	for (i = 0;i < size;i++)
	{
		if (arr[i] > high)
		{
			high = arr[i];
		}
	}
	printf("\n\n\t enter element you want to check for maximum :");
	scanf("%d", &num);
	if (num == high)
		printf("\n\n\t entered  number is maximum ");
	else
		printf("\n\n\t entered number is minimum ");
}

