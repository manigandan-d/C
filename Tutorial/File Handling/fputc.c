#include <stdio.h>

int main()
{
    FILE *fptr = fopen("t4.txt", "w");

    fputc('M', fptr);

    fclose(fptr);

    return 0;
}