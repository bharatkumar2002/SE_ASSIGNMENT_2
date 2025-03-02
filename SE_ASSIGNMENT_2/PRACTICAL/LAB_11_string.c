#include <stdio.h>
#include <string.h>

void main() {
    char str1[100], str2[100]; 
    char result[200]; 

    // Take input for the first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Take input for the second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Concatenate the strings
    strcpy(result, str1);
    strcat(result, str2);

    // Display the concatenated string
    printf("Concatenated string: %s\n", result);

    // Display the length of the concatenated string
    printf("Length of concatenated string: %lu\n", strlen(result));

}

