#include <iostream>

using namespace std;

void rohmbus(int height)
{
    for(int i=0; i<height; i++)
    {
        for(int j=0; j<height-i-1; j++)
        {
            cout<<" ";
        }
        for(int j=0; j<height; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main()
{
    int height;
    cin>>height;

    rohmbus(height);

    return 0;
}