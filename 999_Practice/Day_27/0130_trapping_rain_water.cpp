// Given an array arr[] of N non-negative integers representing height of blocks at index i as Ai where the width of each 
// block is 1. Compute how much water can be trapped in between blocks after raining.
// 
// Structure is like below:
// |  |
// |__|
// We can trap 2 units of water in the middle gap.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);

    long long n;
    cin>>n;

    long long arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    long long left[n];
    long long right[n];

    left[0] = arr[0];
    right[n-1] = arr[n-1];

    for(long long i = 1; i<n; i++)
    {
        if(arr[i-1] > left[i-1])
        {
            left[i] = arr[i-1];
        }
        else
        {
            left[i] = left[i-1];
        }
    }

    for(long long i = 0; i<n; i++)
    {
        if(arr[i+1] > right[i+1])
        {
            right[i]=arr[i+1];
        }
        else
        {
            right[i]=right[i+1];
        }
    }

    int ans=0;
    for(long long i=0; i<n; i++)
    {
        if(left[i]>arr[i] && right[i]>arr[i])
        {
            ans+=min(left[i], right[i])-arr[i];
        }
    }

    cout<<ans<<endl;

    return 0;
}