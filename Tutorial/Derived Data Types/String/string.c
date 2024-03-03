#include <stdio.h>

int main() {
    printf("Hello World\n");

    // With format specifier
    printf("%s\n", "Hello World");

    // Line splicing
    printf("If you want to shine like a sun, first burn like a sun. \
    - APJ Abdul Kalam");
    printf("If you want to shine like a sun, first burn like a sun. "
    "- APJ Abdul Kalam");

    // Character array 
    char charArr[6] = "Hello"; // Always make the array one character longer than the string
    // char charArr[6] = {'H', 'e', 'l', 'l', 'o', '\0'}

    // Character pointer
    char *charPtr = "World";

    printf("%s\n", charArr);
    printf("%s\n", charPtr);

    // Short length initializer
    char shortLen[10] = "Hello"; // Remaining rooms are filled with null characters
    printf("%s\n", shortLen);

    // Long length initializer 
    char longLen[4] = "Hello"; // Rest of the part is truncated - undefined behaviour
    printf("%s\n", longLen);

    // Equal length initializer 
    char equalLen[5] = "Hello"; // Undefined behaviour
    printf("%s\n", equalLen);

    // Omitting the length 
    char name[] = "Alex"; // it's automatically set by the compiler
    printf("%s\n", name);

    // Prints the part of the string
    char *sub = "Programming language";
    printf("%.7s\n", sub);

    // Prints the part of the string with the specified field
    printf("|%10.7s|\n", sub); // rjust

    // puts() 
    char *ptr = "Character pointer";
    puts(ptr); // Automatically add newline character 

    // scanf() 
    char string[10];
    printf("Enter a string: ");
    scanf("%s", string); // reading without whitespace
    printf("%s\n", string);

    // gets()
    char *getsString;
    printf("Enter a string: ");
    gets(getsString); // reading with whitespace
    printf("%s\n", string);

    return 0;
}
