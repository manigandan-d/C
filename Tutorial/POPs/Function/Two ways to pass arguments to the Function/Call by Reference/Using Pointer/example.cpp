#include <iostream>

using namespace std;

void fun(int *);

int main()
{
    int a = 10;

    cout<<a<<endl;

    fun(&a);

    cout<<a<<endl;

    return 0;
}

void fun(int *ptr)
{
    *ptr = 5;
}
