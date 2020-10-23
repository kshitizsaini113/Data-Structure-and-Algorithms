// Program for 

#include <iostream>

using namespace std;

int max(int n1, int n2, int n3)
{
    if(n1>n2 && n1>n3)
    {
        return n1;
    }
    else if(n2>n3)
    {
        return n2;
    }
    else
    {
        return n3;
    }
}

int min(int n1, int n2, int n3)
{
    if(n1<n2 && n1<n3)
    {
        return n1;
    }
    else if(n2<n3)
    {
        return n2;
    }
    else
    {
        return n3;
    }
}

int main()
{
    int n1, n2, n3;
    cin>>n1>>n2>>n3;

    cout<<max(n1, n2, n3)<<endl;
    cout<<min(n1, n2, n3)<<endl;
    
    return 0;
}