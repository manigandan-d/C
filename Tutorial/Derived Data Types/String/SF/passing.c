#include <stdio.h>

void output(char []);

int main()
{
    char s[] = "Mani";

    output(s);

    return 0;
}

void output(char s[])
{
    printf("%s\n", s);
}