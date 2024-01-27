#include <stdio.h>

#define MAX 6

int main(int argc, char *argv[])
{
    char s1[] = "Hello";
    char s2[MAX];

    int i;

    for(i=0; s1[i] != '\0'; i++)
    {
        s2[i] = s1[i];
    }

    s2[i] = '\0';

    printf("%s\n", s2);

    return 0;
}