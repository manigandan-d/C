// Given a positive integer denoting n, do the following:
    // * If 1<=n<=9, print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.).
    // * If n>9, print Greater than 9.

#include <stdio.h>

int main() {
    int n;

    printf("Enter the value: ");
    scanf("%d", &n);

    switch (n) {
        case 1:
            printf("one\n");
            break;
            
        case 2:
            printf("two\n");
            break;
        
        case 3:
            printf("three\n");
            break;
            
        case 4:
            printf("four\n");
            break;
            
        case 5:
            printf("five\n");
            break;
        
        case 6:
            printf("six\n");
            break;
            
        case 7:
            printf("seven\n");
            break;
            
        case 8:
            printf("eight\n");
            break;
            
        case 9:
            printf("nine\n");
            break;
            
        default:
            printf("Greater than 9\n");
            break;
    }

    return 0;
}

// Sample Input 1
// 5

// Sample Input 2
// 8

// Sample Input 3
// 44
