#include <stdio.h>

#define MAX 10

int main()
{
    FILE *fptr = fopen("t5.txt", "r");

    char name[MAX];

    fgets(name, MAX, fptr);

    printf("%s\n", name);

    fclose(fptr);

    return 0;

}