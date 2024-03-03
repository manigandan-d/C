#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    srand(8);

    printf("Enter the number of random numbers you want : ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
        printf("%d\n", 1 + (rand() % 5));


    return 0;
}