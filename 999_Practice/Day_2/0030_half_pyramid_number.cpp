// Program for printing half pyramid number pattern

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int d=1; d<=n; d++)
    {
        for(int b=1; b<=d; b++)
        {
            cout<<d<<" ";
        }
        cout<<endl;
    }

    return 0;
}
