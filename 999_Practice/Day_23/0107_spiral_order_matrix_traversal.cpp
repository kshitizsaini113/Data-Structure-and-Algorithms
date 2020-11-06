// Program for spiral order matrix traversal

#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    int arr[n][m];
    for(int i=0; i<n; i++)
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
        for(int col=columnStart; col<=columnEnd; col++)
        {
            cout<<arr[rowStart][col]<<" ";
        }
        cout<<endl;
        rowStart++;

        for(int row=rowStart; row<=rowEnd; row++)
        {
            cout<<arr[row][columnEnd]<<" ";
        }
        cout<<endl;
        columnEnd--;

        for(int col=columnEnd; col>=columnStart; col--)
        {
            cout<<arr[rowEnd][col]<<" ";
        }
        cout<<endl;
        rowEnd--;

        for(int row=rowEnd; row>=rowStart; row--)
        {
            cout<<arr[row][columnStart]<<" ";
        }
        cout<<endl;
        columnStart++;
    }
    
    return 0;
}