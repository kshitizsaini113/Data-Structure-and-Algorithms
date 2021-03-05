// Efficient program for searching in a sorted matrix.

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

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

    int k;
    cin>>k;

    int r=0;
    int c=m-1;
    while(r<n and c>=0)
    {
        if(arr[r][c] == k)
        {
            cout<<"Element found"<<endl;
            return 0;
        }
        else if(arr[r][c] > k)
        {
            c--;
        }
        else
        {
            c++;
        }
    }

    cout<<"Element not found"<<endl;

    return 0;
}