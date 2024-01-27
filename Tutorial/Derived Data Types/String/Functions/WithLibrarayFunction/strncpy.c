#include <stdio.h>
#include <string.h>

#define MAX 4

int main(int argc, char *argv[])
{
    char s1[] = "I'm MANIGANDAN D";
    char s2[MAX];

    int n = sizeof(s2) - 1;

    strncpy(s2, s1, n);

    s2[n] = '\0';

    printf("%s\n", s2);

    return 0;
}