// Program for finding max and min in 2 numbers

#include <iostream>

using namespace std;

int main()
{
    int n1,n2;
    cin>>n1>>n2;

    if(n1>n2)
    {
        cout<<"Max : "<<n1<<" Min : "<<n2;
    }
    else
    {
        cout<<"Max : "<<n2<<" Min : "<<n1;
    }
    
    return 0;
}