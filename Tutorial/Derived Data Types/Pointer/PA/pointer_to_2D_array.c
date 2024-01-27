#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int a[][3] = {{1, 2, 3}, {4, 5, 6}};
    int i, j;

    printf("%d\n", a);

    for(i=0; i<2; i++)
        printf("%d ", (a+i));

    printf("\n");

    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", *(a+i)+j);
        }
    }   

    printf("\n");

    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", *(*(a+i)+j));
        }
    } 

    return 0;
}

