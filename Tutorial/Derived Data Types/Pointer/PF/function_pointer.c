#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add(int a, int b)
{
    return a+b;
}

int main(int argc, char *argv[])
{
    int result;
    int (*fun_ptr)(int, int) = add;
    result = fun_ptr(10, 20);
    printf("%d", result);

    return 0;
}
