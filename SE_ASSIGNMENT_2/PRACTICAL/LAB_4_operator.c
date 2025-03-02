#include <stdio.h>

void main() 
{
    int a, b;
        printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    // Arithmetic operations
    printf("Arithmetic Operations:\n");
    printf("Addition= %d + %d = %d\n", a, b, a + b);
    printf("Subtraction= %d - %d = %d\n", a, b, a - b);
    printf("Multiplication= %d * %d = %d\n", a, b, a * b);
    printf("Division= %d / %d = %d\n", a, b, a / b);
    printf("Module= %d %% %d = %d\n", a, b, a % b);
    
    // Relational operations
    printf("\nRelational Operations:\n");
    printf("%d == %d= %d\n", a, b, a == b);
    printf("%d != %d= %d\n", a, b, a != b);
    printf("%d > %d= %d\n", a, b, a > b);
    printf("%d < %d= %d\n", a, b, a < b);
    printf("%d >= %d= %d\n", a, b, a >= b);
    printf("%d <= %d= %d\n", a, b, a <= b);
    
    // Logical operations
    printf("\nLogical Operations:\n");
    printf("Logical AND (a && b)= %d\n", a && b);
    printf("Logical OR (a || b)= %d\n", a || b);
    printf("Logical NOT (!a)= %d\n", !a);
    printf("Logical NOT (!b)= %d\n", !b);
}

