// In this challenge, we will learn some basic concepts of C that will get you started with the language. You will need to use the same syntax to read input and write output in many C challenges. As you work through these problems, review the code stubs to learn about reading from stdin and writing to stdout.

#include <stdio.h>

int main() {
    char s[100];
    // scanf("%[^\n]s", s);
    scanf("%[^\n]%*c", s);

    printf("Hello, World!\n");
    printf("%s\n", s);
}

// Sample Input
// Welcome to C programming.
