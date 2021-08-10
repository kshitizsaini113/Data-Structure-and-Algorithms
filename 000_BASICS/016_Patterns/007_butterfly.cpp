#include <iostream>

using namespace std;

void butterfly(int height)
{
    for(int i=0; i<height; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<"* ";
        }
        for(int j=0; j<((height-i-1)*2); j++)
        {
            cout<<"  ";
        }
        for(int j=0; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0; i<height; i++)
    {
        for(int j=0; j<height-i; j++)
        {
            cout<<"* ";
        }
        for(int j=0; j<i*2; j++)
        {
            cout<<"  ";
        }
        for(int j=0; j<height-i; j++)
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

    butterfly(height);
    return 0;
}