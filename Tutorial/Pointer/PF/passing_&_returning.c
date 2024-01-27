#include <stdio.h>

void greet()
{
    printf("Welcome...\n");
}

void mani()
{
    printf("Hello Mani\n");
}

void *hello(void (*fun_ptr)())
{
    fun_ptr();

    return greet;
}

int main()
{
    void (*fun_ptr)() = hello(mani);
    fun_ptr();

    return 0;
}
