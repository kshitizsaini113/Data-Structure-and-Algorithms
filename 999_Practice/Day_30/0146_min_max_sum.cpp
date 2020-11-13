// Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the 
// five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.

#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[5];
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr+5);

    int min_sum=arr[0]+arr[1]+arr[2]+arr[3];
    int max_sum=arr[1]+arr[2]+arr[3]+arr[4];

    cout<<min_sum<<"  "<<max_sum<<endl;

    return 0;
}