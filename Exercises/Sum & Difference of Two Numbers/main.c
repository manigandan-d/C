// Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum & difference

#include <stdio.h>

int main() {
    int ia, ib, is, id;
    float fa, fb, fs, fd;
    
    scanf("%d %d", &ia, &ib);
    scanf("%f %f", &fa, &fb);
    
    is = ia + ib;
    id = ia - ib;
    
    fs = fa + fb;
    fd = fa - fb;

    printf("%d %d\n", is, id);
    printf("%.1f %.1f\n", fs, fd);
    
    return 0;
}

// Sample Input
// 10 4
// 4.0 2.0
