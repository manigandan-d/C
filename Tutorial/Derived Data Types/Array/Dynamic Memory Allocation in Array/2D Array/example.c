#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, c, i, j;

    printf("\nEnter the number of rows : ");
    scanf("%d", &r);

    printf("\nEnter the number of columns : ");
    scanf("%d", &c);

    int **a = (int **)malloc(r * sizeof(int *));

    printf("\n");

    for(i=0; i<r; i++)
    {
        a[i] = (int *)malloc(c * sizeof(int));
    }

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", (*(a+i)+j));
        }
    }

    for(i=0; i<r; i++)
    {
        printf("\n");

        for(j=0; j<c; j++)
        {
            printf("%d ", *(*(a+i)+j));
        }
    }

    printf("\n");

    free(a);

    return 0;
}