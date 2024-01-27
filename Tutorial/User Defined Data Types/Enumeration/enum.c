#include <stdio.h>

enum Bool{False, True};

int main(int argc, char *argv[])
{
    enum Bool var;
    var = True;

    printf("%d\n", var);

    return 0;
}