#include <stdio.h>

void fun3() {
    // printf("%d\n", var); // error
}

void fun2() {
    fun3();
}

void fun1() {
    fun2();
    int var = 10;
}

int main() {
    fun1();

    return 0;
}
