#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//#define MAX 10

int main(int argc, char *argv[])
{
    #ifndef MAX
    printf("Macro is not defined by #define\n");

    #else
    printf("Macro is defined\n");

    #endif

    return 0;
}