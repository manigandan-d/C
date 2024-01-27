#include <iostream>

using namespace std;

void fun(int);

int main()
{
    fun(5);

    return 0;
}

void fun(int n)
{
    if(n == 0)
        return;

    else
        cout<<n<<endl;

    fun(n-1);
}
