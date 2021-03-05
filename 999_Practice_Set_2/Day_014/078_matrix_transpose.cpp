// Given a square matrix A and it's number of rows and columns. Return the transpose of A.

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;
    cin>>n;

    int arr[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<endl;

    for(int j=0; j<n; j++)
    {
        for(int i=0; i<n; i++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}