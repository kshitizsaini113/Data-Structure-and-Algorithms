#include <iostream>

using namespace std;

void invertedPattern(int height)
{
    for(int i=0; i<height; i++)
    {
        for(int j=1; j<=height-i; j++)
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

    invertedPattern(height);

    return 0;
}