#include <iostream>

using namespace std;

void printShiftedTriangle(int height)
{
    for(int i=height-1; i>=0; i--)
    {
        for(int j=i-1; j>=0; j--)
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

    printShiftedTriangle(height);

    return 0;
}