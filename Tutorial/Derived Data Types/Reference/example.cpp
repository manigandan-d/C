#include <iostream>

using namespace std;

int main()
{
    int a = 10;

    int &ref = a;

    cout<<a<<" "<<ref<<endl;

    ref = 5;

    cout<<a<<" "<<ref<<endl;    

    return 0;
}
