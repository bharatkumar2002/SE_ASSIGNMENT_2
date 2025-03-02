#include<stdio.h>
void main()
{
	int a, b, choice;
	printf("\n\n\t enter any two number :");
	scanf("%d %d", &a, &b);
	printf("\n\n\t-------------------------------");
	printf("\n\n\t press 1 for addition");
	printf("\n\n\t press 2 for subtraction");
	printf("\n\n\t press 3 for multiply");
	printf("\n\n\t press 4 for division");
	printf("\n\n\t enter your choice :");
	scanf("%d", &choice);
	printf("\n\n\t-------------------------------");

	switch (choice)
	{
	case 1: printf("\n\n\t addition :%d", a + b);
		break;
               case 2: printf("\n\n\t subtraction :%d", a - b);
		break;
	case 3: printf("\n\n\t multiply :%d", a * b);
		break;
	case 4: printf("\n\n\t division :%d", a / b);
		break;
	default: printf("\n\n\t invalid choice ");
	}
}

