#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char s1[] = "I'm MANIGANDAN D";
    char s2[] = "I'm MANIGANDAN D";

    int res = strncmp(s1, s2, 3);

    if(res == 0)
        printf("Strings are Equal\n");

    else
        printf("Strings are Unequal\n");

    printf("%d\n", res);

    return 0;
}