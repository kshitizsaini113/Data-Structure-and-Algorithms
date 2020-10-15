// Program for printing a half pyramid rotated by 180 degree pattern

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int d=1; d<=n; d++)
    {
        for(int b=1; b<=n; b++)
        {
            if(b<=n-d)
            {
                cout<<"  ";
            }
            else
            {
                cout<<"* ";
            }
            
        }
        cout<<endl;
    }

    return 0;
}
