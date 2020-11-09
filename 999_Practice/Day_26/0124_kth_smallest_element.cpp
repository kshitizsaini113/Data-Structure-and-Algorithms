// Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth smallest 
// element in the given array. It is given that all array elements are distinct.
// 
// Expected Time Complexity: O(n)

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    const int SIZE=1e5;
    int dup[SIZE];

    for(int i=0; i<SIZE; i++)
    {
        dup[i] = 0;
    }

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        dup[arr[i]]++;
    }

    int k;
    cin>>k;

    int start=0;
    int i=0;

    while(start<k)
    {
        if(dup[i] > 0)
        {
            start++;
        }
        i++;
    }

    cout<<i-1;

    return 0;
}