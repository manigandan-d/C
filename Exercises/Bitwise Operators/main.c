// Bitwise operators examples 

#include <stdio.h>

void calculate_the_maximum(int n, int k) {
    int max_and=0, max_or=0, max_xor=0;
    int bitwise_and=0, bitwise_or=0, bitwise_xor=0;

    for(int i=1; i<=n; i++) {
        for(int j=i+1; j<=n; j++) {
            bitwise_and = i & j;
            bitwise_or = i | j;
            bitwise_xor = i ^ j;

            if(bitwise_and < k && bitwise_and > max_and) {
                max_and = bitwise_and;
            }

            if(bitwise_or < k && bitwise_or > max_or) {
                max_or = bitwise_or;
            }

            if(bitwise_xor < k && bitwise_xor > max_xor) {
                max_xor = bitwise_xor;
            }
        }
    }

    printf("%d\n", max_and);
    printf("%d\n", max_or);
    printf("%d\n", max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

// Sample Input
// 5 4
