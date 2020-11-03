// Program for finding the maximum circular subarray sum.

// Max subarray sum = Total sum of array - Sum of non contributing elements

// To find te sum of non contributing elements we need to find the maximum subarray sum of the negative of the current array.

#include <bits/stdc++.h>

using namespace std;

int kadane(int arr[], int n)
{
    int curr=0;
    int maxSum =INT_MIN;
    for(int i=0; i<n; i++)
    {
        curr = arr[i] + curr;
        if(curr<0)
        {
            curr=0;
        }
        maxSum = max(curr, maxSum);
    }

    return maxSum;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int wrapSum, nonWrapSum;

    nonWrapSum = kadane(arr, n);

    int totalSum=0;
    for(int i=0; i<n; i++)
    {
        totalSum+=arr[i];
        arr[i]*=-1;
    }

    wrapSum = totalSum + kadane(arr, n);
    // Two minus makes it plus.

    cout<<max(wrapSum, nonWrapSum)<<endl;

    return 0;
}