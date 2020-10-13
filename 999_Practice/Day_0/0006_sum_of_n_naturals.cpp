// Program for calculating the sum of first n naturals

#include <iostream>

using namespace std;

int main()
{
    int n, d, sum=0;
    cin>>n;

    for(d=1; d<=n; d++)
    {
        sum+=d;
    }
    cout<<sum;
    
    return 0;
}