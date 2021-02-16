#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    bool one;

    for(int i=1; i<=n; i++)
    {
        if((i%2))
        {
            one=true;
        }
        else{
            one=false;
        }
        for(int j=1; j<=i; j++)
        {
            if(one)
            {
                cout<<"1 ";
                one = false;
            }
            else
            {
                cout<<"0 ";
                one = true;
            }
        }
        cout<<endl;
    }

    return 0;
}