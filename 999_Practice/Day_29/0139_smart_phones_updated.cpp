// You are developing a smartphone app. You have a list of potential customers for your app. Each customer has a budget 
// and will buy the app at your declared price if and only if the price is less than or equal to the customer's budget.
// 
// You want to fix a price so that the revenue you earn from the app is maximized. Find this maximum possible revenue.
// 
// For instance, suppose you have 4 potential customers and their budgets are 30, 20, 53 and 14. In this case, the maximum 
// revenue you can get is 60 .

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    long long n, a[1000000], max;
    int i, j;
    cin>>n;

    for(i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    sort(a, a + n);
    max  = a[n - 1];
    
    for(i = n - 2; i >= 0; i--)
    {
        if(max < (a[i] * (n - i)))
        {
            max = a[i] * (n - i);
        }
    }

    cout<<max<<endl;
    
    return 0;
}