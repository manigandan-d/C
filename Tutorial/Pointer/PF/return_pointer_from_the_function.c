#include <stdio.h>
#include <stdlib.h>

int *fun();

int main()
{
    int *p;

    p = fun();

    printf("\n%d\n", *p);

    free(p);

    return 0;
}

int *fun()
{
    int *a = malloc(sizeof(int));

    *a = 10;

    return a;
}