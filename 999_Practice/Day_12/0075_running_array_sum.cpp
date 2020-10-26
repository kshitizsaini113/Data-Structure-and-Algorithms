// Program for finding running array sum.
// 
// Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
// Return the running sum of nums.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<endl;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<arr[0]<<" ";

    for(int i=1; i<n; i++)
    {
        arr[i] = arr[i] + arr[i-1];
        cout<<arr[i]<<" ";
    }

    return 0;
}