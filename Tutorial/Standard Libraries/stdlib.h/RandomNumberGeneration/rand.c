#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    printf("Enter the number of random numbers you want : ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
        printf("%d\n", rand());

    printf("Range for the rand function : %d\n", RAND_MAX);

    return 0;
}