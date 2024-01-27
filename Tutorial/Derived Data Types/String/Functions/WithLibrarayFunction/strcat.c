#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char s1[] = "MANIGANDAN D";
    char s2[] = "I'm ";

    strcat(s2, s1);

    printf("%s\n", s2);

    return 0;
}