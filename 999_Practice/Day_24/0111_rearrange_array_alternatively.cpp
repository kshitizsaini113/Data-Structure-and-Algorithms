// Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively i.e first element 
// should be max value, second should be min value, third should be second max, fourth should be second min and so on...

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    int temp[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        temp[i] = arr[i];
    }

    int start=0;
    int end=n-1;

    int i=0;
    while(start<=end)
    {
        arr[i] = temp[end];
        end--;
        arr[i+1] = temp[start];
        start++;
        i+=2; 
    }
    if(n%2 != 0)
    {
        arr[i] = temp[start];
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}