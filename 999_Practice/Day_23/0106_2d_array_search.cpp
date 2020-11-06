// Program for searching for an element in 2d array.

#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    int arr[n][m];
    for(int i=0 ;i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }

    int rowStart=0, rowEnd=n-1;
    int columnStart=0, columnEnd=m-1;

    while((rowStart<=rowEnd) && (columnStart<=columnEnd))
    {
        for(int i=columnStart; i<=columnEnd; i++)
        {
            cout<<arr[rowStart][i]<<" ";
        }
        cout<<endl;
        rowStart++;

        for(int i=rowStart; i<=rowEnd; i++)
        {
            cout<<arr[i][columnEnd]<<" ";
        }
        cout<<endl;
        columnEnd--;

        for(int i=columnEnd; i>=columnStart; i--)
        {
            cout<<arr[rowEnd][i]<<" ";
        }
        cout<<endl;
        rowEnd--;

        for(int i=rowEnd; i>=rowStart; i--)
        {
            cout<<arr[i][columnStart]<<" ";
        }
        cout<<endl;
        columnStart++;
    }

    return 0;
}