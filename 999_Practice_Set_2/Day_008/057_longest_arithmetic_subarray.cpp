// Sarasvati has an array of N non-negative integers. The i-th integer of array is Ai. She wants to
// choose a contiguous arithmetic subarray from her array that has the maximum length. Please help
// her to determine the length of longest continuous arithmetic subarray.

#include <iostream>

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

    int prev_diff = arr[1] - arr[0];
    int current = 2;
    int ans = 2;

    for(int i=2; i<n; i++)
    {
        if ( prev_diff == arr[i] - arr[i-1] )
        {
            current++;
        }
        else
        {
            prev_diff = arr[i] - arr[i-1];
            current = 2;
        }

        ans = max(ans, current);
    }

    cout<<ans<<endl;

    return 0;
}