#include <stdio.h>

#define MAX 50

int main()
{
    FILE *fptr = fopen("t7.txt", "a");

    char sent[MAX];

    fgets(sent, MAX, stdin);

    fprintf(fptr, "\n%s", sent);

    fclose(fptr);

    return 0;
}