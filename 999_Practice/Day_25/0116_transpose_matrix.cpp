// Given a square matrix A and its number of rows (or columns) N,
// return the transpose of A.
// 
// The transpose of a matrix is the matrix flipped over it's main
// diagonal, switching the row and column indices of the matrix.
// 
// CONSTRAINS
// 1 <= N <= 1000

#include <bits/stdc++.h>

using namespace std;

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

    for(int i=0; i<n; i++)
    {
        for(int j=i; i+j<n; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}