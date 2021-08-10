#include <iostream>

using namespace std;

void printInvertedTriangle(int height)
{
    for(int i=height-1; i>=0; i--)
    {
        for(int j=i; j>=0; j--)
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

    printInvertedTriangle(height);

    return 0;
}