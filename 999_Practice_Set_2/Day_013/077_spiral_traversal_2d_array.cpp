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

    int rowStart = 0;
    int rowEnd = n-1;
    int colStart = 0;
    int colEnd = m-1;

    while(rowStart<=rowEnd && colStart<=colEnd)
    {
        
    }
}