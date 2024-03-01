// Given a five digit integer, print the sum of its digits.

#include <stdio.h>

int main() {
	
    int n;
    scanf("%d", &n);
    
    int sum=0;
    
    while(n > 0){
        sum += (n % 10);
        n /= 10;
    }
    
    printf("%d\n", sum);
    
    return 0;
}

// Sample Input:
// 10564
