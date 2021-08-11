#include <iostream>

using namespace std;

void palindromicPyramid(int height)
{
    for(int i=1; i<=height; i++)
    {
        for(int j=1; j<=height-i; j++)
        {
            cout<<"  ";
        }
        for(int j=i; j>1; j--)
        {
            if(j!=1)
            {
                cout<<j<<" ";
            }
        }
        cout<<"1 ";
        for(int j=2; j<=i; j++)
        {
            if(i!=1)
            {
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int height;
    cin>>height;

    palindromicPyramid(height);

    return 0;
}