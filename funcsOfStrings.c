#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[20];
    char str3[20];

    // Using strcpy to copy a string
    strcpy(str2, str1);

    // Using strcat to concatenate strings
    strcat(str2, " World");

    // Using strlen to find the length of a string
    int length = strlen(str2);

    // Using strcmp to compare strings
    int result = strcmp(str1, str2);

    // Using strchr to find the first occurrence of a character in a string
    char *ptr = strchr(str2, 'W');

    // Using strstr to find the first occurrence of a substring in a string
    char *subPtr = strstr(str2, "World");

    // Using strncpy to copy a portion of a string
    strncpy(str3, str2, 5);
    str3[5] = '\0'; // Adding null terminator

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);

    printf("Length of str2: %d\n", length);
    printf("Comparison result: %d\n", result);

    if (ptr) {
        printf("Found 'W' at index: %ld\n", ptr - str2);
    } else {
        printf("'W' not found in str2\n");
    }

    if (subPtr) {
        printf("Found 'World' at index: %ld\n", subPtr - str2);
    } else {
        printf("'World' not found in str2\n");
    }

    return 0;
}

