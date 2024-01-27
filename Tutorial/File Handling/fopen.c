#include <stdio.h>

int main()
{
    FILE *fptr = fopen("t1.txt", "r");

    if(fptr != NULL)
        printf("File is opened successfully\n");

    else
        printf("Error\n");

    fclose(fptr);

    return 0;

}