#include <stdio.h>

// Function to generate Fibonacci sequence
void generateFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm,i;

    printf("Fibonacci Sequence: %d, %d", t1, t2);

    for (i = 1; i <= n - 2; ++i) {
        nextTerm = t1 + t2;
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Please enter a number greater than or equal to 2.\n");
    } else {
        generateFibonacci(n);
    }

    return 0;
} 

