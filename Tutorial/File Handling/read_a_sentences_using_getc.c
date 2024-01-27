#include <stdio.h>

int main()
{
    FILE *fptr = fopen("t6.txt", "r");

    char c;

    while(1)
    {
        c = getc(fptr);

        if(feof(fptr))
            break;

        printf("%c", c);
    }

    fclose(fptr);

    return 0;
}