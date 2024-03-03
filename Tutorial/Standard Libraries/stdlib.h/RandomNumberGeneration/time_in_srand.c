#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, i;
    srand(time(NULL));

    printf("Enter the number of random numbers you want : ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
        printf("%d\n", rand());

    return 0;
}