#include <stdio.h>

int var = 10;

void fun3() {
    printf("%d\n", var);
}

void fun2() {
    fun3();
}

void fun1() {
    fun2();
}

int main() {
    fun1();

    return 0;
}
