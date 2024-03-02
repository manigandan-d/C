#include <stdio.h>
#include "demo.c"

extern int var;
// Multiple declarations are allowed but multiple definitions are not allowed
// extern int var;
// extern int var;

int a = 25;

// When an extern variable is initialized, memory for this variable is allocated
extern int b = 50;

int main() {
    printf("%d\n", var);

    // It first searches the own file if it's not found, it starts to search included files
    extern int a; 
    printf("%d\n", a);

    printf("%d\n", b);

    return 0;
}