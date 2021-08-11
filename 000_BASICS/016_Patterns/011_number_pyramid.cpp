#include <iostream>

using namespace std;

void numberPyramid(int height)
{
    for(int i=1; i<=height; i++)
    {
        for(int j=0; j<height-i; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int height;
    cin>>height;

    numberPyramid(height);

    return 0;
}