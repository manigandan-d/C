#include <stdio.h>
#include <limits.h>

int main()
{
    printf("%d\n", SHRT_MIN);
    printf("%d\n", SHRT_MAX);
    printf("%d\n\n", USHRT_MAX);

    printf("%d\n", INT_MIN);
    printf("%d\n", INT_MAX);
    printf("%d\n\n", UINT_MAX);

    printf("%d\n", LONG_MIN);
    printf("%d\n", LONG_MAX);
    printf("%d\n\n", ULONG_MAX);

    printf("%d\n", LLONG_MIN);
    printf("%d\n", LLONG_MAX);
    printf("%d\n\n", ULLONG_MAX);

    return 0;
}