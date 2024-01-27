#include <stdio.h>

#define MAX 100

int main()
{
    FILE *fptr = fopen("t6.txt", "r");

    char sent[MAX];

    while(1)
    {
        fgets(sent, MAX, fptr);

        if(feof(fptr))
            break;

        printf("%s", sent);
    }

    fclose(fptr);

    return 0;
}