#include <stdio.h>

int main()
{
    FILE *fptr = fopen("t3.txt", "w");

    putc('M', fptr);

    fclose(fptr);

    return 0;
}