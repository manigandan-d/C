#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char s[] = "C C++ Java Python";

    char *tok = strtok(s, " ");

    while(tok != NULL)
    {
        printf("%s\n", tok);
        tok = strtok(NULL, " ");
    }


    return 0;
}
