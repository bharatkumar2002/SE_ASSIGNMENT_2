#include <stdio.h>

int palidrome(int num) {
    int reversed = 0, remainder, original;
    
    original = num;
    
    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    // Check if the original number is equal to the reversed number
    return original == reversed;
}

 void main() {
    int number;
    
    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Check if the number is a palindrome
    if (palidrome(number)) {
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is not a palindrome number.\n", number);
    }
}

