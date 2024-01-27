#include <stdio.h>

#define MAX 100

int main()
{
    FILE *fptr = fopen("t10.txt", "a+");

    char sent[MAX];
    char c;

    fgets(sent, MAX, stdin);
    fprintf(fptr, "\n%s", sent);

    rewind(fptr);

    while(1)
    {
        c = getc(fptr);

        if(feof(fptr))
            break;

        printf("%c", c);
    }

    printf("\n");

    fclose(fptr);

    return 0;
}