#include <stdio.h>

int main()
{
    FILE *fptr = fopen("t1.txt", "r");

    int a;

    a = fclose(fptr);

    if(a == 0)
        printf("File is closed successfully\n");

    else
        printf("Error\n");

    return 0;

}