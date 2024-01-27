#include <stdio.h>

int main(int argc, char *argv[])
{
    char s[] = "Hello";

    int i;

    for(i=0; s[i] != '\0'; i++);

    printf("%d\n", i);

    return 0;
}