// Printing numbers till n in decresasing order.

#include <bits/stdc++.h>

using namespace std;

void decrease(int n)
{
    if(n==0)
    {
        return;
    }

    cout<<n<<" ";
    decrease(n-1);
}

int main()
{
    int n; 
    cin>>n;

    decrease(n);
    cout<<endl;
    
    return 0;
}