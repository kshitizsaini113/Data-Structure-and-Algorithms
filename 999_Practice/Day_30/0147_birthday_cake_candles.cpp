// You are in charge of the cake for a child's birthday. You have decided the cake will have one candle for each year of their 
// total age. They will only be able to blow out the tallest of the candles. Count how many candles are tallest.

#include <bits/stdc++.h>
#include <algorithm>

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

    sort(arr, arr+n);

    int count = 1;
    for(int i=n-2; arr[i]==arr[n-1]; i--)
    {
        count++;
    }

    cout<<count<<endl;

    return 0;
} 