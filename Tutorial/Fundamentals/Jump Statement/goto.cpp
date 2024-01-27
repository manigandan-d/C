#include<iostream>

#define MAX 5

using namespace std;

int main()
{
    int i, j, k;

    for(i=0; i<MAX; i++)
    {
        for(j=0; j<MAX; j++)
        {
            for(k=0; k<MAX; k++)
            {
                goto label;
            }
        }
    }

    label:
        cout<<"End of Iteration"<<endl;

    return 0;
}
