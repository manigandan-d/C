#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;

    printf("Enter the number of elements : ");
    scanf("%d", &n);
    
    int *ptr = (int *)calloc(n, sizeof(int));

    for(i=0; i<n; i++)
    {
        scanf("%d", ptr+i);
    }

    for(i=0; i<n; i++)
    {
        printf("%d ", *(ptr+i));
    }

    int n2;

    printf("Enter the new size : ");
    scanf("%d", &n2);

    ptr = realloc(ptr, n2*sizeof(int));

    for(i=n; i<n2; i++)
    {
        scanf("%d", ptr+i);
    }

    for(i=0; i<n2; i++)
    {
        printf("%d ", *(ptr+i));
    }

    free(ptr);
    
    ptr = NULL;

    return 0;
}