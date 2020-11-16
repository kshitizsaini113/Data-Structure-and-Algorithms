// Program to check if a number is power of two.

#include <bits/stdc++.h>

using namespace std;

bool isPowerOfTwo(int n)
{
    return (n && !(n & n-1));
}

int main()
{
    cout<<isPowerOfTwo(16)<<endl;
    cout<<isPowerOfTwo(13)<<endl;

    return 0;
}