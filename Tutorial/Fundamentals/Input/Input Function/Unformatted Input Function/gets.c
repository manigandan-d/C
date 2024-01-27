#include <stdio.h>

#define MAX 10

int main()
{
    char s[MAX];
    
    gets(s);

    printf("%s\n", s);

    return 0;
}