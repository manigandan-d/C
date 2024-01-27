#include <stdio.h>

#define MAX 4

int main(int argc, char *argv[])
{
    char s1[] = "Hello";
    char s2[MAX];

    int n = sizeof(s2) - 1;

    int i;

    for(i=0; i < n; i++)
    {
        s2[i] = s1[i];
    }

    s2[i] = '\0';

    printf("%s\n", s2);

    return 0;
}