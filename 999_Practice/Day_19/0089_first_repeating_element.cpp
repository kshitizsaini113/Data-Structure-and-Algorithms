// Given an array of size n. The task is to find repeating element in the array of
// integers, i.e. an element that occurs more than once and whose index of first occurance
// is smallest.

// CONSTRAINS
// 1 <= N <= 10^6
// 0 <= Ai <= 10^6

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    const int N = 1e6+2;
    int idx[N];
    for(int i=0; i<N; i++)
    {
        idx[i]=-1;
    }

    int minIdx = INT_MAX;

    for(int i=0; i<n; i++)
    {
        if(idx[a[i]] != -1)
        {
            minIdx = min(minIdx, idx[a[i]]);
        }
        else
        {
            idx[a[i]] = i;
        }
    }

    if(minIdx == INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<a[minIdx]<<endl;
    }

    return 0;
}