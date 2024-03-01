// Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.

#include <stdio.h>

int max_of_four(int a, int b, int c, int d) {    
    int max = (a > b)? a : b;
    max = (c > max)? c : max;
    max = (d > max)? d : max;
    
    return max;
    
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d\n", ans);
    
    return 0;
}

// Sample Input
// 3
// 4
// 6
// 5
