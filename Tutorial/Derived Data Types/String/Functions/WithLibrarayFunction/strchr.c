#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char s[] = "I'm MANIGANDAN D";
    char c = 'A';

    char *p = strchr (s, c);

    if(p != NULL)
    {
        int pos = p - s + 1;
        printf("\n%c is present in %s at %dth position\n", c, s, pos);
    }

    else
        printf("\n%c is not present in %s\n", c, s);

    return 0;
}
