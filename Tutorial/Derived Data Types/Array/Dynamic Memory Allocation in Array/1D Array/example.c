#include <stdio.h>
#include <stdlib.h>

int n = 5;

int main()
{
    int i;

    int *arr = (int *)calloc(n, sizeof(int));

    for(i=0; i<n; i++)
    {
        scanf("%d", (arr+i));
    }

    for(i=0; i<n; i++)
    {
        printf("%d ", *(arr+i));
    }   

    free(arr);

    return 0;
}
