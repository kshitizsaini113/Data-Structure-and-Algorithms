// Given a square matrix, calculate the absolute difference between the sums of its diagonals.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int arr[n][n];

    int d1=0;
    int d2=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
            if(i==j)
            {
                d1+=arr[i][j];
            }
            if(i+j==n-1)
            {
                d2+=arr[i][j];
            }
        }
    }

    if(d1>d2)
    {
        cout<<d1-d2<<endl;
    }
    else
    {
        cout<<d2-d1<<endl;
    }

    return 0;
}