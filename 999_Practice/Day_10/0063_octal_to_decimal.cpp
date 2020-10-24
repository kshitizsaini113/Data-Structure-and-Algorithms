// Program for converting octal to decimal

#include <iostream>

using namespace std;

int toDecimal(int n)
{
    int ans=0;
    int x=1;

    while(n>0)
    {
        int y = n%10;
        ans += x*y;
        x *= 8;
        n/=10;
    }

    return ans;
}

int main()
{
    int n;
    cin>>n;

    cout<<toDecimal(n);
    
    return 0;
}