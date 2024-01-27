#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 10

int main(int argc, char *argv[])
{
    #ifdef MAX
    printf("Macro is defined by #define\n");

    #else
    printf("Macro is not defined\n");

    #endif

    return 0;
}