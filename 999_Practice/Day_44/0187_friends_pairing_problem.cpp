// Find the number of ways in which n friends can be paired up or can remain single.

#include <bits/stdc++.h>

using namespace std;

int friendsPairing(int n)
{
    if((n == 0) || (n == 1) || (n == 2))
    {
        return n;
    }

    return friendsPairing(n-1) + friendsPairing(n-2)*(n-1);
}

int main()
{
    int n;

    cout<<"Enter the number of friends: ";
    cin>>n;

    cout<<friendsPairing(n);
    
    return 0;
}