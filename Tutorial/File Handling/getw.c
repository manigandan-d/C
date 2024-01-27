#include <stdio.h>

int main()
{
    FILE *fptr = fopen("t11.txt", "r");

    int a;

    while((a=getw(fptr)) != EOF)
        printf("%d", a);

    fclose(fptr);

    return 0;
}