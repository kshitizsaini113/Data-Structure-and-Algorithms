// Given an array A of positive integers of size N, where each value represents number of chocolates in a packet. Each packet 
// can have variable number of chocolates. There are M students, the task is to distribute chocolate packets such that :
// 
// 1. Each student gets one packet.
// 2. The difference between the number of chocolates given to the students having packet with maximum chocolates and 
//      student having packet with minimum chocolates is minimum.

#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int times;
    cin>>times;

    while(times--)
    {
        long long n;
        cin>>n;

        long long arr[n];
        for(long long i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        sort(arr, arr + n);

        long long t;
        cin>>t;

        long long min_diff = LONG_LONG_MAX;

        for(long long i=0; i+t-1<n; i++)
        {
            min_diff = min(min_diff, arr[i+t-1]-arr[i]);
        }

        cout<<min_diff<<endl;
    }

    return 0;
}