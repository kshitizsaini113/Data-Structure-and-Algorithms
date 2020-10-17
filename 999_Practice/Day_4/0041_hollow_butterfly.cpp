// Program for printing hollow butterfly pattern

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
            if(b<=d)
            {
                if(b==1 || b==d)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            else
            {
                cout<<"  ";
            }
        }
        for(int b=1; b<=n; b++)
        {
            if(b>n-d)
            {
                if(b==n-d+1 || b==n)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            else
            {
                cout<<"  ";
            } 
        }
        cout<<endl;
    }
    for(int d=n; d>=1; d--)
    {
        for(int b=1; b<=n; b++)
        {
            if(b<=d)
            {
                if(b==1 || b==d)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            else
            {
                cout<<"  ";
            }
        }
        for(int b=1; b<=n; b++)
        {
            if(b>n-d)
            {
                if(b==n-d+1 || b==n)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}
