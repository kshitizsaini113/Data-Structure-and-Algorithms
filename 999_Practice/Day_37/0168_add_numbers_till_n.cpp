// Program for finding sum of all numbers till n.

#include <bits/stdc++.h>

using namespace std;

int sum(int n)
{
    if(n==1)
    {
        return 1;
    }

    int prevSum = sum(n-1);
    return n + prevSum;
}

int main()
{
    int n;
    cin>>n;

    cout<<sum(n)<<endl;

    return 0;
}