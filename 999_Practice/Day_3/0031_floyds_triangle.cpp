// Program for printing floyd's triangle pattern

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a=1;

    for(int d=1; d<=n; d++)
    {
        for(int b=1; b<=d; b++)
        {
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }

    return 0;
}
