// Given an array arr[] of positive integers of size N. Reverse every sub-array of K group elements.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, b;
    cin>>n>>b;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; i+=b)
    {
        int start = i;
        int end = min(i+b, n) - 1;

        while(start<end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;

            start++;
            end--;
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"  ";
    }

    return 0;
}