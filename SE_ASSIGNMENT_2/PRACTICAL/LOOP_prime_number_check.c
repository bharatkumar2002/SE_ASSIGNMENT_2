#include <stdio.h>
void main() {
    int num, i, status = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 2) {
        printf("%d is not a prime number.\n", num);
    }
 else {
        for (i = 2; i <= num - 1; i++) {
            if (num % i == 0) {
                status = 1; 
                break;
            }
        }
        if (status == 1)
      {
            printf("%d is not a prime number.\n", num);
        }
 else
      {
            printf("%d is a prime number.\n", num);
        }
    }
}

