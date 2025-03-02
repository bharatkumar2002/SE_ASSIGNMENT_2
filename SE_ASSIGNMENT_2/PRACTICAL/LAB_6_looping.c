#include <stdio.h>

// while loop
void main()
 {
    int i = 1;
    printf("Using while loop:\n");
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    
    //  for loop
     printf("Using for loop:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d", i);
    }
    printf("\n");
    
    //  do-while loop
    
    printf("Using do-while loop:\n");
    do {
        printf("%d ", i);
        i++;
    } while (i <= 10);
    printf("\n");
}


