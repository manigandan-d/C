#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add(int a, int b)
{
    printf("%d", (a+b));
}

void sub(int a, int b)
{
    printf("%d", (a-b));
}

void mul(int a, int b)
{
    printf("%d", (a*b));
}

int main(int argc, char *argv[])
{
    int a=10, b=5, ch;
    void (*fun_ptr_arr[])(int, int) = {add, sub, mul};
    printf("Enter Choice : 0 for Addition, 1 for Subtraction & 2 for Multiplication : ");
    scanf("%d", &ch);

    if(ch > 2)
        return 0;

    else
        fun_ptr_arr[ch](a, b);

    return 0;
}

