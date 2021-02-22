// Given an array a[] of size n, for every i from 0 to n-1, output max(a[0], a[1], ..., a[i])

#include <iostream>
#include <climits>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        cout << max << " ";
    }
    cout << endl;

    return 0;    
}