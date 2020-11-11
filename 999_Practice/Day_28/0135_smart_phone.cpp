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

    unsigned long long n;
    cin>>n;

    unsigned long long arr[n];

    for(unsigned long long i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    unsigned long long max_profit = 0;

    for(unsigned long long i=0; i<n; i++)
    {
        unsigned long long sum=0;
        for(unsigned long long j=0; j<n; j++)
        {
            if(arr[j] >= arr[i])
            {
                sum += arr[i];
            }
        }
        max_profit = max(max_profit, sum);
    }

    cout<<max_profit;

    return 0;
}