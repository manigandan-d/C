#include <stdio.h>

struct Demo
{
    char c;
    int a;
};

int main()
{
    struct Demo d;

    printf("%d\n", sizeof(d));

    return 0;
}