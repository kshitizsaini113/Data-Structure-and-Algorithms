// For a given array a[] of size n. For every i from 0 to n-1.
// Output max(a[0], a[1], ......., a[i])

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int mx=INT_MIN;
    for(int i=0; i<n; i++)
    {
        mx=max(mx, a[i]);
        cout<<mx<<endl;
    }
}