#include <stdio.h>

#define MAX 20

int main(int argc, char *argv[])
{
    char s1[] = "Mani";
    char s2[] = "Hello ";

    int len, i;

    for(len=0; s2[len] != '\0'; len++);

    for(i=0; s1[i] != '\0'; i++, len++)
    {
        s2[len] = s1[i];
    }

    s2[len] = '\0';

    printf("%s\n", s2);

    return 0;
}