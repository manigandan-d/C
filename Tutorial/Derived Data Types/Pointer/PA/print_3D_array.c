#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define i 2
#define j 2
#define k 2

int main(int argc, char *argv[])
{
    int a[i][j][k] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    int *ptr;

    for(ptr = &a[0][0][0]; ptr <= &a[i-1][j-1][k-1]; ptr++)
        printf("%d ", *ptr);

    return 0;
}