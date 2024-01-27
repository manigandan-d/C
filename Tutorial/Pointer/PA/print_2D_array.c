#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define r 2
#define c 3

int main(int argc, char *argv[])
{
    int a[r][c] = {{1, 2, 3}, {4, 5, 6}};
    int *ptr;

    for(ptr = &a[0][0]; ptr <= &a[r-1][c-1]; ptr++)
        printf("%d ", *ptr);

    return 0;
}