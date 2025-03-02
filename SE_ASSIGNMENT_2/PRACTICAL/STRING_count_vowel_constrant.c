#include<stdio.h>
void main()
{
	char ch;
	printf("\n\n\t enter a character  :");
	scanf("%c", &ch);
	switch (ch)
	{
	case 'a':
		printf("\n\n\t it is a vowel");
		break;
	case 'e': 
		printf("\n\n\t it is a vowel");
		break;

	case 'i':
		printf("\n\n\t it is a vowel");
		break;
	case 'o': if (ch == 'o' || ch == 'O')
		printf("\n\n\t it is a vowel");
		break;
	case 'u': if (ch == 'u' || ch == 'u')
		printf("\n\n\t it is a vowel");
		break;
	default:printf("\n\n\t it is consonants");
		break;
	}
}

