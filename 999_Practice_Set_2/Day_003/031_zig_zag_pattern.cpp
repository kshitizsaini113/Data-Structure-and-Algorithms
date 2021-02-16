#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==1 && (i+j)%4==0)
            {
                cout<<"* ";
            }
            else if(i==2 && j%2==0)
            {
                cout<<"* ";
            }
            else if(i==3 && (j+i)%4==0)
            {
                cout<<"* ";
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