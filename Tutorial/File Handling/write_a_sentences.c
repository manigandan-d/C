#include <stdio.h>

#define MAX 100

int main()
{
    FILE *fptr = fopen("t6.txt", "w");

    char sent[MAX];

    fgets(sent, MAX, stdin);
    fputs(sent, fptr);

    fgets(sent, MAX, stdin);
    fputs(sent, fptr);

    fclose(fptr);

    return 0;
}