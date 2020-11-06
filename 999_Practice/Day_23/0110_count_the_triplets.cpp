// Given an array of distinct integers. 
// The task is to count all the triplets such that sum of two elements equals the third element.
// 
// Constraints:
// 1 ≤ N ≤ 10^3
// 1 ≤ arr[i] ≤ 10^5

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    const int SIZE=1e5;
    int index[SIZE];
    for(int i=0; i<SIZE; i++)
    {
        index[i]=0;
    }

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        index[arr[i]]=1;
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(index[arr[i] + arr[j]] == 1)
            {
                cout<<arr[i]<<" + "<<arr[j]<<" = "<<arr[i] + arr[j]<<endl;
            }
        }
    }

    return 0;
}