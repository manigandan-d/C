#include <iostream>
#include <cstdarg>

using namespace std;

void sum(int, ...);

int main()
{
    sum(5, 1, 2, 3, 4, 5);

    return 0;
}

void sum(int n, ...)
{
    int i, res, tot = 0;

    va_list vl;

    va_start(vl, n);

    for(i=0; i<n; i++)
    {
        res = va_arg(vl, int);
        tot += res;
    }

    cout<<tot<<endl;
}