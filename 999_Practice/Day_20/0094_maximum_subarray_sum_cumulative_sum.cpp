// Program for finding maximum subarray sum using cumulative sum technique.

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

    int currentSum[n+1];
    currentSum[0]=0;
    for(int i=1; i<=n; i++)
    {
        currentSum[i] = currentSum[i-1] + a[i-1];
    }

    int maxSum = INT_MIN;
    for(int i=1; i<=n; i++)
    {
        int sum = 0;
        for(int j=0; j<i; j++)
        {
            sum = currentSum[i] - currentSum[j];
            maxSum = max(maxSum, sum);
        }
    }

    cout<<maxSum<<endl;

    return 0;
}