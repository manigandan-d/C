#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *lang[] = {"C", "C++", "Java", "Python", "Ruby"};

    for(int i=0; i<5; i++)
        printf("%s ", lang[i]);

    return 0;
}