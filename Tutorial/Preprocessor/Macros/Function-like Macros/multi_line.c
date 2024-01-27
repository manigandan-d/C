#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX(a, b) if(a>b) \
                  printf("%d\n", a); \
                  else \
                  printf("%d\n", b); \

int main(int argc, char *argv[])
{
    int a=3, b=5;

    MAX(a, b);

    //printf("%d\n", c);

    return 0;
}