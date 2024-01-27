#include<stdio.h>

#define MAX 50

int main()
{
    FILE *fptr = fopen("t9.txt", "w+");

    char sent[MAX];
    char c;

    fgets(sent, MAX, stdin);
    fputs(sent, fptr);

    rewind(fptr);

    while(1)
    {
        c = getc(fptr);

        if(feof(fptr))
            break;

        printf("%c", c);
    }

/*     fgets(sent, MAX, fptr);
    printf("%s", sent); */

    fclose(fptr);
    
    return 0;
}