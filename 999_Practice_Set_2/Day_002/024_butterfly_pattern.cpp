#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        for(int j=(n-i)*2; j>=1; j--)
        {
            cout<<"  ";
        }
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j++)
        {
            cout<<"* ";
        }
        for(int j=(i-1)*2; j>=1; j--)
        {
            cout<<"  ";
        }
        for(int j=i; j<=n; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}