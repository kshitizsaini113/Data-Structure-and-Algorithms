// We have to find the maximum circular subarray sum.

#include <iostream>
#include <climits>

using namespace std;

int kadane(int arr[], int n)
{
    int currentSum = 0;
    int maxSum = INT_MIN;
    for(int i=0; i<n; i++)
    {
        currentSum += arr[i];
        maxSum = max(maxSum, currentSum);
        if(currentSum<0)
        {
            currentSum = 0;
        }
    }

    return maxSum;
}

int main()
{
    int n;
    cin>>n;

    int totalSum = 0;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        totalSum+=arr[i];
    }

    int nonWrapSum = kadane(arr, n);

    for(int i=0; i<n; i++)
    {
        arr[i]*=-1;
    }

    int wrapSum = totalSum + kadane(arr, n);

    int maxSum = max(nonWrapSum, wrapSum);

    cout<<maxSum<<endl;

    return 0;
}