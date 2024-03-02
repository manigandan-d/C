#include <stdio.h>

int var = 10; // global variable

void fun() {
    printf("%d\n", var);
}

int main() {
    printf("%d\n", var);

    fun();

    return 0;
}
