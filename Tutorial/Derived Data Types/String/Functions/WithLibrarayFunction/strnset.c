#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char s[] = "I'm MANIGANDAN D";

    strnset(s, '*', 3);

    printf("%s\n", s);

    return 0;
}
