// Check if there exists two elements in a sorted array such that their sum is equal to given k.

#include <iostream>

using namespace std;

bool pairSum(int arr[], int n, int k)
{
    int start=0;
    int end=n-1;
    while(start<end)
    {
        if(arr[start] + arr[end] == k)
        {
            cout<<start<<" & "<<end;
            return true;
        }
        else if(arr[start] + arr[end] < k)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    return false;
}

int main()
{
    int n;
    cin>>n;

    int k;
    cin>>k;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<pairSum(arr, n, k)<<endl;

    return 0;
}