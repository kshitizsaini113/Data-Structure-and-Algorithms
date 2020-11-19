// Program for using Euclid's Algorithm for finding the GCD (HCF) of two numbers.

#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    while(b!=0)
    {
        int rem = a%b;
        a = b;
        b = rem;
    }

    return a;
}

int main()
{
    int a, b;
    cin>>a>>b;

    cout<<gcd(a, b)<<endl;

    return 0;
}