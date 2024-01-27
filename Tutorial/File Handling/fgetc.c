#include <stdio.h>

int main()
{
    FILE *fptr = fopen("t4.txt", "r");

    char c;

    c = fgetc(fptr);

    printf("%c\n", c);

    fclose(fptr);

    return 0;
}