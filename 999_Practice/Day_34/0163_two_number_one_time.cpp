// Program to find 2 unique numbers in an array where all numbers except two, are present twice.

#include <bits/stdc++.h>

using namespace std;

int setBit(int arr, int n)
{
    return ((arr & (1<<n)) != 0);
}

void unique(int arr[], int n)
{
    int xorsum = 0;
    for(int i=0; i<n; i++)
    {
        xorsum ^= arr[i];
    }

    int tempxor = xorsum;
    int setbit = 0;
    int position = 0;
    while(setbit!=1)
    {
        setbit = xorsum & 1;
        position++;
        xorsum = xorsum>>1;
    }

    int newxor = 0;
    for(int i=0; i<n; i++)
    {
        if(setBit(arr[i], position-1))
        {
            newxor ^= arr[i];
        }
    }

    cout<<newxor<<" "<<(tempxor^newxor)<<endl;
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

    unique(arr, n);

    return 0;
}