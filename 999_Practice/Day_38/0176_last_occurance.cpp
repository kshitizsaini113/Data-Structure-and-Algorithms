// Program for finding the last occurance of a number in an array.

#include <bits/stdc++.h>

using namespace std;

int lastOccurance(int arr[], int n, int i, int key)
{
    if(i == n)
    {
        return -1;
    }
    
    int restArray = lastOccurance(arr, n, i+1, key);
    
    if(restArray != -1)
    {
        return restArray;
    }
    if(arr[i] == key)
    {
        return i;
    }

    return -1;
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

    cout<<lastOccurance(arr, n, 0, key);

    return 0;
}