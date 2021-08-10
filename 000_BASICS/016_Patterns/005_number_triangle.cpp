#include <iostream>

using namespace std;

void numberTriangle(int height)
{
    for(int i=1; i<=height; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int height;
    cin>>height;

    numberTriangle(height);

    return 0;
}