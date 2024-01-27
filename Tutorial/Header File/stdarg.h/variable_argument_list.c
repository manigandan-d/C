#include <stdio.h>
#include <stdarg.h>

int sum(int, ...);

int main()
{
    int a;
    a = sum(5, 1, 2, 3, 4, 5);

    printf("%d\n", a);

    return 0;
}

int sum(int n, ...)
{
    int res, tot, i;

    va_list vl;

    va_start(vl, n);

    for(i=0; i<n; i++)
    {
        res = va_arg(vl, int);
        tot += res;
    }

    return tot;

}