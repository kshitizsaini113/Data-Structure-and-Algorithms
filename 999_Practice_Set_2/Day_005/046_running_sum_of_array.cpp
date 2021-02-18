// Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

// Return the running sum of nums.

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    for(int i=1; i<n; i++)
    {
        arr[i] += arr[i-1];
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}