// Given an array A of N positive numbers. The task is to find the first Equilibium Point in the array. 
// 
// Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

#include <bits/stdc++.h>

using namespace std;

int equilibrium(int arr[], int n)
{
    int sum = 0;
    int leftsum = 0;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
    }
    for(int i=0; i<n; i++)
    {
        sum -= arr[i];
        if(sum == leftsum)
        {
            return i+1;
        }
        leftsum+=arr[i];
    }
    return -1;
}

int main()
{
    int m;
    cin>>m;

    while(m--)
    {
        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int k = equilibrium(arr, n);
        cout<<k<<endl;
    }
    return 0;
}