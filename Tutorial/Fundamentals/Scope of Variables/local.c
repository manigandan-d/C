#include <stdio.h>

void fun() {
    // printf("%d\n", var); // error
}

int main() {
    int var = 10; // local variable

    printf("%d\n", var);

    fun();

    return 0;
}
