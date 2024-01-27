#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int a[] = {1, 2, 3, 4, 5};
    int *ptr = a;
    int i;

    printf("%d\n", a);

    for(i=0; i<5; i++)
        printf("%d ", (a+i));

    printf("\n");

    for(i=0; i<5; i++)
        printf("%d ", *(a+i));

    return 0;
}

