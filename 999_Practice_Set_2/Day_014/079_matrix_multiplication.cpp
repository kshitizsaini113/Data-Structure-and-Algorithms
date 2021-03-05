// Given two 2-D arrays of size n1*n2 and n2*n3. Print the result of multiplication of two matrices.

#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::fill_n;

int main()
{
    int n1, n2, n3;
    cin>>n1>>n2>>n3;

    int arr1[n1][n2];
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            cin>>arr1[i][j];
        }
    }

    int arr2[n2][n3];
    for(int i=0; i<n2; i++)
    {
        for(int j=0; j<n3; j++)
        {
            cin>>arr2[i][j];
        }
    }

    int arr[n1][n3];
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n3; j++)
        {
            arr[i][j] = 0;
        }
    }

    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n3; j++)
        {
            for(int k=0; k<n2; k++)
            {
                arr[i][j] += arr1[i][k] + arr2[k][j];
            }
        }
    }

    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}