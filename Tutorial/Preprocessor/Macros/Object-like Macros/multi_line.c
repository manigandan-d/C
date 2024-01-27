#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VAL 1, \
            2, \
            3

int main(int argc, char *argv[])
{
    int a[] = {VAL};

    for(int i=0; i<3; i++)
        printf("%d\n", a[i]);

    return 0;
}