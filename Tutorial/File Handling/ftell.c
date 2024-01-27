#include <stdio.h>

#define MAX 20

int main()
{
    FILE *fptr = fopen("t11.txt", "r");

    printf("%d\n", ftell(fptr));

    fseek(fptr, 4, SEEK_SET);

    printf("%d\n", ftell(fptr));

    fclose(fptr);

    return 0;
}