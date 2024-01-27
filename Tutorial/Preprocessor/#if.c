#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 10

int main(int argc, char *argv[])
{
    #if (MAX > 0)
    printf("Macro expansion is +ve\n");
    #elif (MAX < 0)
    printf("Macro expansion is -ve\n");
    #else
    printf("Macro expansion is zero\n");
    #endif

    return 0;
}