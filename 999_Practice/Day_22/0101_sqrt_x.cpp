// Implement int sqrt(int x).
// 
// Compute and return the square root of x, where x is guaranteed to be a non-negative integer.
// 
// Since the return type is an integer, the decimal digits are truncated and only the integer part of the result is returned.

#include <bits/stdc++.h>

using namespace std;

int sqrt(int x)
{
    int result = 1;

    if ((x == 0) || (x == 1))
    {
        return x;
    }
    else
    {
        while(result*result <= x)
        {
            result++;
        }
        return result-1;
    }
}

int main()
{
    int n;
    cin>>n;

    cout<<sqrt(n)<<endl;

    return 0;
}