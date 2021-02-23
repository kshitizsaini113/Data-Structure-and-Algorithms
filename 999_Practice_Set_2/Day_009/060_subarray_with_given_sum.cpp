// Given a sorted array A of size N of non-negative integers, find a continuous subarray which adds
// to a given number s.

#include <iostream>

using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int start = -1;
    int end = -1;
    int i = 0, j = 0;
    int sum = 0;

    while( j < n && sum + arr[j] <= s )
    {
        sum += arr[j];
        j++;
    }

    if( sum == s )
    {
        cout << i+1 << " - " << j << endl;
        return 0;
    }

    while( j < n )
    {
        sum += arr[j];
        while( sum < s )
        {
            sum -= arr[i];
            i++;
        }

        if( sum == s )
        {
            start = i + 1;
            end = j + 1;
            break;
        }
        j++;
    }

    cout << start << " - " << end << endl;

    return 0;
}