#include <stdio.h>

#define MAX 10

int main()
{
    int i;

    int arr[MAX] = {[1]=5, [3]10, [5 ... 8]=15, 20, [9]=25};

    for(i=0; i<MAX; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;

}
