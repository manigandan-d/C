#include <stdio.h>

int main()
{
    char c;
    
    c = getc(stdin);

    putc(c, stdout);

    return 0;
}