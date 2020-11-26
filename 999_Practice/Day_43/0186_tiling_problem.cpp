// Given a "2 * n" board, and tiles of size "2 * 1", count the number of ways to tile the given block usig the tile defined.

#include <bits/stdc++.h>

using namespace std;

int tiling(int n)
{
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }
    if(n == 2)
    {
        return 2;
    }

    return tiling(n-1) + tiling(n-2);
}

int main()
{
    int n;

    cout<<"Enter the value of n in the \"2*n\" board : ";
    cin>>n;
    cout<<endl;

    cout<<"The number of ways of tiling are: "<<tiling(n);

    return 0;
}