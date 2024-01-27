#include <stdio.h>

#define MAX 10

int main(int argc, char *argv[])
{
    char s1[] = "Mani";
    char s2[MAX] = "Hello ";

    int len, i, n;

    for(len=0; s2[len] != '\0'; len++);

    n = sizeof(s2) - len - 1;

    for(i=0; i<n; i++, len++)
    {
        s2[len] = s1[i];
    }

    s2[len] = '\0';

    printf("%s\n", s2);

    return 0;
}