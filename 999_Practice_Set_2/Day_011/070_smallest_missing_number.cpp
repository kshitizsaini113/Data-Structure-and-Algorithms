// You are given an array arr[] of N integers including zero. The task is to find the smallest 
// positive number missing from the array.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    const int N = 1e6 + 2;
    bool check[N];
    fill_n(check, N, false);

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i] >= 0)
        {
            check[arr[i]] = true;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(check[i] == false)
        {
            cout<<i<<endl;
            break;
        }
    }


}