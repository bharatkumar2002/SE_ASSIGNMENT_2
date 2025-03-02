#include <stdio.h>

void main() {
    int num = 10; // Declare and initialize an integer variable
    int *ptr;    // Declare a pointer to an integer

    ptr = &num;  // Initialize the pointer to point to the address of num

    printf("Original value of num: %d\n", num);

    // Modify the value of num using the pointer
    *ptr = 20;   // Change the value at the address stored in ptr

    printf("Modified value of num: %d\n", num);
}

