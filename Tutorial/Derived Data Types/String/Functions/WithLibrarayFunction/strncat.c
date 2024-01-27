#include <stdio.h>
#include <string.h>

#define MAX 9

int main(int argc, char *argv[])
{
    char s1[] = "MANIGANDAN D";
    char s2[MAX] = "I'm ";

    int n = sizeof(s2) - strlen(s2) - 1;

    strncat(s2, s1, n);

    printf("%s\n", s2);

    return 0;
}