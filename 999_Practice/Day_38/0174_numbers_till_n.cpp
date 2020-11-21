// Printing numbers till n in accending order.

#include <bits/stdc++.h>

using namespace std;

void increase(int n)
{
    if(n==0)
    {
        return;
    }

    increase(n-1);

    cout<<n<<" ";
}

int main()
{
    int n;
    cin>>n;

    increase(n);
    cout<<endl;

    return 0;
}