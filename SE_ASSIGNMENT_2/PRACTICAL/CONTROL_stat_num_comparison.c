#include<stdio.h>
void main()
{
	int a, b, c;
	printf("\n\n\t enter first number :");
	scanf("%d", &a);
	printf("\n\n\t enter second number :");
	scanf("%d", &b);
	printf("\n\n\t enter third number :");
	scanf("%d", &c);
	if (a > b)
	{
		if (a > c)
			printf("\n\n\t first number is maximum :%d", a);
		else
			printf("\n\n\t first number is not max :%d", a);
	}
	else if (b > c)
	{
		if (b > a)
			printf("\n\n\t second number is maximum :%d", b);
		else
			printf("\n\n\t second number is not max :%d", b);
	}
	else
		printf("\n\n\t third number is maximum :%d", c);
}

