#include <stdio.h>

#define MAX 10

int main()
{
    char s[MAX];
    
    fgets(s, MAX, stdin);

    fputs(s, stdout);

    return 0;
}