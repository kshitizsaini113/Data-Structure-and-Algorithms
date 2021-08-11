#include <iostream>

using namespace std;

void star(int height)
{
    for(int i=1; i<=height; i++)
    {
        for(int j=i; j<height; j++)
        {
            cout<<"  ";
        }
        for(int j=1; j<(i*2); j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1; i<=height; i++)
    {
        for(int j=1; j<i; j++)
        {
            cout<<"  ";
        }
        for(int j=1; j<((height-i+1)*2); j++)
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

    star(height);

    return 0;
}