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

    int maxSum = INT_MIN;

    for(int start=0; start<n; start++)
    {
        int sum = 0;
        for(int end=start; end<n; end++)
        {
            sum += arr[end];
            maxSum = max(maxSum, sum); 
        }
    }

    cout<<maxSum<<endl;

    return 0;
}