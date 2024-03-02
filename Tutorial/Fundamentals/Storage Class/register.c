#include <stdio.h>

int main() {
    register int var = 10;
    // No need to put register keyword because this is the choice of compiler whether it puts the given variable in register or not and themselves do the necessary optimizations
    // int var = 10

    printf("%d\n", var);

    return 0;
}