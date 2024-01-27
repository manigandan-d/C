#include <stdio.h>

#define MAX 10

int main()
{
    char s[MAX];
    
    fgets(s, MAX, stdin);

    printf("%s\n", s);

    return 0;
}