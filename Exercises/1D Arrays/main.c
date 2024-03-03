// In this challenge, create an array of size n dynamically, and read the values from stdin. Iterate the array calculating the sum of all elements. Print the sum and free the memory where the array is stored.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int sum=0;
    scanf("%d", &n);
    
    int *arr = (int *)malloc(sizeof(int)*n);
    
    for(int i=0; i<n; i++) {
        scanf("%d", arr+i);
    }
    
    for(int i=0; i<n; i++) {
        sum += *(arr+i);
    }
    
    printf("%d\n", sum);
    
    free(arr);
   
    return 0;
}

// Sample Input 1
// 6
// 16 13 7 2 1 12

// Sample Input 2
// 7
// 1 13 15 20 12 13 2 
