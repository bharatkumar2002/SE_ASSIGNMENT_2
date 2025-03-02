#include <stdio.h>

void main()
{
    int num, sum = 0,org,rem=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    org = num;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    printf("Sum of digits: %d\n", sum);
    num = org;
    
    printf("Reverse the number:");
    while (num > 0)
    {
        rem = num % 10;
        printf("%d", rem);
        num = num / 10;
    }
}

