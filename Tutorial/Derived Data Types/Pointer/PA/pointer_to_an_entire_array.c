#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int a[] = {1, 2, 3, 4, 5};
    int (*ptr)[5] = &a;

    for(int i=0; i<5; i++)
    {
        printf("%d ", *(*ptr + i));
    }

    printf("\n");

    for(int i=0; i<5; i++)
    {
        printf("%d ", (*ptr)[i]);
    }

    return 0;
}

