#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int a[] = {1, 2, 3, 4, 5};
    int *ptr[5];
    int i;

    for(i=0; i<5; i++)
    {
        ptr[i] = a+i;
    }

    for(i=0; i<5; i++)
    {
        printf("%d ", *ptr[i]);
    }

    return 0;
}

