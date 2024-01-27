#include <stdio.h>

int main()
{
    FILE *fptr = fopen("t12.txt", "w");

    putw(5, fptr);

    fclose(fptr);

    return 0;
}