#include <stdio.h>

int main()
{
    char c;
    
    c = fgetc(stdin);

    fputc(c, stdout);

    return 0;
}