#include <stdio.h>
long long factorial(int n);

int main() {
    int number;
    long long result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = factorial(number);
    
    printf("Factorial of %d is %lld\n", number, result);
    
    return 0;
}

// Function definition
long long factorial(int n) {
    if (n == 0) {
        return 1; // Base case: 0! is 1
    } else {
        return n * factorial(n - 1); // Recursive call
    }
}

