#include <stdio.h>

int main()
{
    FILE *fptr = fopen("t3.txt", "r");

    char c;

    c = getc(fptr);

    printf("%c\n", c);

    fclose(fptr);

    return 0;
}