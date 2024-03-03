// Given an array, of size , reverse it.

// Example: If array, arr=[1, 2, 3, 4, 5], after reversing it, the array should be, arr=[5, 4, 3, 2, 1].

#include <stdio.h>
#include <stdlib.h>

void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n-1;
    int temp = 0;
    
    while(start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
}

int main() {
    int num, *arr, i;
    int ind;

    scanf("%d", &num);

    arr = (int*) malloc(num * sizeof(int));

    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    
    reverseArray(arr, num);

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}

// Sample Input 1
// 6
// 16 13 7 2 1 12 

// Sample Input 2
// 7
// 1 13 15 20 12 13 2 

// Sample Input 3 
// 8
// 15 5 16 15 17 11 5 11 
