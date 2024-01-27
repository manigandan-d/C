#include<stdio.h>

#define MAX 10

int main()
{
    FILE *fptr = fopen("t8.txt", "r+");

    char c;
    char word[MAX];

    while(1)
    {
        c = getc(fptr);

        if(feof(fptr))
            break;

        printf("%c", c);
    }

    printf("\n");

    rewind(fptr);

    fgets(word, MAX, stdin);

    fputs(word, fptr);

    fclose(fptr);
    
    return 0;
}