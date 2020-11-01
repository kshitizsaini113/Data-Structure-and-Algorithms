// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

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

    int target;
    cin>>target;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i]+arr[j]==target)
            {
            cout<<i<<": "<<arr[i]<<endl<<j<<": "<<arr[j]<<endl;   
            return 0;
            }
        }
    }

    cout<<"No such combination exists.";

    return 0;
}