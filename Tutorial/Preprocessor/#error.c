#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 10

#ifndef MAX
#error First you need to define the macros and then compile

#else
int main(int argc, char *argv[])
{
    printf("Main function\n");

    return 0;
}

#endif