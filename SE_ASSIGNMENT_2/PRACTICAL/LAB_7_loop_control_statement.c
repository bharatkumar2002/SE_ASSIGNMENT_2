#include <stdio.h>
void main() 
{
	int i;
    for (i = 1; i <= 10; i++) {
        if (i == 3) {
            continue; // Skip printing the number 3
        }
        if (i == 5) {
            break; // Stop the loop when i is 5
        }
        printf("%d ", i);
    }
    printf("\nLoop exited at i = 5\n");
  
}

