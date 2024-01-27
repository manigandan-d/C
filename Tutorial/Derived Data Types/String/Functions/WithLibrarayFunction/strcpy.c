#include <stdio.h>
#include <string.h>

#define MAX 17

int main(int argc, char *argv[])
{
    char s1[] = "I'm MANIGANDAN D";
    char s2[MAX];

    strcpy(s2, s1);

    printf("%s\n", s2);

    return 0;
}