#include <stdio.h>

int main()
{
    char c;
    
    c = fgetc(stdin);

    printf("%c\n", c);

    return 0;
}