// Given an array A of positive integers. Your task is to find the leaders in the array.
// 
// Note: An element of array is leader if it is greater than or equal to all the elements to its right side. 
// Also, the rightmost element is always a leader. 

#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    string st;
    int max = INT_MIN;
    for(int i=n-1; i>=0; i--)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            st = to_string(max) + " " + st;
        }
    }

    cout<<st<<endl;

    return 0;
}