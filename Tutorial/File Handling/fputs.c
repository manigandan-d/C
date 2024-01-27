#include <stdio.h>

int main()
{
    FILE *fptr = fopen("t5.txt", "w");

    fputs("Mani", fptr);

    fclose(fptr);

    return 0;

}