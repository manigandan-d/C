#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char s1[] = "I'm MANIGANDAN D";
    char s2[] = "AND";

    char *p = strstr (s1, s2);

    if(p != NULL)
    {
        printf("\n%s is present in %s\n", s2, s1);
    }

    else
        printf("\n%s is not present in %s\n", s2, s1);

    return 0;
}
