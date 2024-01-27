#include <stdio.h>

enum Bool{False, True};

int main(int argc, char *argv[])
{
    enum Bool var;

    printf("%d\n", sizeof(var));

    return 0;
}