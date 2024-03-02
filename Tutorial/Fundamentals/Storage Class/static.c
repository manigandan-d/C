#include <stdio.h>

int n = 5;

void fun() {
    // static int count = 0;
    static int count;

    // static int count = 3;

    // Constant literal should be assigned to static variable
    // int var = 10;
    // static int count = var;

    count += 1;

    printf("%d hello\n", count);
}

int main() {
    for(int i=0; i<n; i++) {
        fun();
    }

    return 0;
}