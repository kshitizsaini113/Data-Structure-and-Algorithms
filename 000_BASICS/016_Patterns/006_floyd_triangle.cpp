#include <iostream>

using namespace std;

void floydTriangle(int height)
{
    int num = 1;

    for(int i=0; i<height; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}

int main()
{
    int height;
    cin>>height;

    floydTriangle(height);

    return 0;
}