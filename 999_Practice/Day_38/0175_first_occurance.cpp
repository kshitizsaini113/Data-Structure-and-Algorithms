// Program for finding the first occurance of a number in an array.

#include <bits/stdc++.h>

using namespace std;

int firstOccurance(int arr[], int n, int i, int key)
{
    if(i==n)
    {
        return -1;
    }

    if(arr[i] == key)
    {
        return i;
    }
    return firstOccurance(arr, n, i+1, key);
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<firstOccurance(arr, n, 0, key)<<endl;
    
    return 0;
}