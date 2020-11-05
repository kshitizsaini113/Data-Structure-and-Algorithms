// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    const int MAX = 1e4 * 3;
    int temp[MAX];
    for(int i=0; i<n; i++)
    {
        temp[i]=0;
    }

    for(int i=0; i<n; i++)
    {
        temp[arr[i]]++;
    }

    for(int i=0; i<MAX; i++)
    {
        if(temp[i] == 1)
        {
            cout<<i<<endl;
            return 0;
        }
    }

    return -1;
}