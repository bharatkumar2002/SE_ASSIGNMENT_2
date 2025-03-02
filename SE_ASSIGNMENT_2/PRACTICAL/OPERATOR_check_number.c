#include <stdio.h>
void main()
 {
    int num;
    printf("Whether the number is even or odd.");
    printf("\n\nEnter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } 
	else
	{
        printf("%d is odd.\n", num);
    }
    
    
    printf("\n\nWhether the number is a multiple of both 3 and 5.");
    
   
	if (num % 3 == 0 && num % 5 == 0)
		printf("\n\n\t number %d is div by both 3 and 5",num);
	else if(num%3==0)
		printf("\n\n\t number %d is div by  3 only",num);
	else if(num%5==0)
		printf("\n\n\t number %d is div by  5 only ",num);
	else
		printf("\n\n\t number %d is not div by both 3 and 5",num);

    
    printf("\n\nWhether the number is positive, negative, or zero.");
    
    if (num > 0)
		printf("\n\n\t your number is positive :%d", num);
	else if (num == 0)
		printf("\n\n\t your number is zero :%d", num);
	else
		printf("\n\n\t your number is negative :%d", num);

    
    
}

