#include <iostream>

using namespace std;

int n = 1;

void odd();
void even();

int main()
{
    odd();

    return 0;
}

void odd()
{
    if(n <= 10)
    {
        cout<<n+1<<endl;
        n += 1;
        even();
    }
}

void even()
{
    if(n <= 10)
    {
        cout<<n-1<<endl;
        n += 1;
        odd();
    }
}
