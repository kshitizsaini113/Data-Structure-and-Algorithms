// Program for finding max among 3 numbers

#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3;
    cin>>n1>>n2>>n3;

    if(n1>n2)
    {
        if(n1>n3)
        {
            cout<<"Max : "<<n1;
        }
        else
        {
            cout<<"Max : "<<n3;
        }
    }
    else
    {
        if(n2>n3)
        {
            cout<<"Max : "<<n2;
        }
        else
        {
            cout<<"Max : "<<n3;
        }
    }
    
    return 0;
}