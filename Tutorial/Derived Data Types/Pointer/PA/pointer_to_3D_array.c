#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int a[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    int i, j, k;

    printf("%d\n", a);

    for(i=0; i<2; i++)
        printf("%d ", (a+i));

    printf("\n");

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d ", *(a+i)+j);
        }
    }

    printf("\n");

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            for(k=0; k<2; k++)
            {
                printf("%d ", *(*(a+i)+j)+k);
            }
        }
    }

    printf("\n");

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            for(k=0; k<2; k++)
            {
                printf("%d ", *(*(*(a+i)+j)+k));
            }
        }
    }



    return 0;
}

