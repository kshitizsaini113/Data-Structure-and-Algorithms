// Program for checking if prime or not

#include <iostream>

using namespace std;

int main()
{
    int n, d;
    cin>>n;

    for(d=2; d<n; d++)
    {
        if(n%d==0)
        {
            cout<<"Non Prime";
            break;
        }
    }
    if(d==n)
    {
        cout<<"Prime";
    }
    
    return 0;
}