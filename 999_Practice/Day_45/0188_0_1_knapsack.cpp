// Put n items with given weight and value in a knapsack of capacity W to get maximum total value in the knapsack.

#include <bits/stdc++.h>

using namespace std;

int knapsack(int value[], int weight[], int n, int W)
{
    if((n == 0) || (W == 0))
    {
        return 0;
    }

    if(weight[n-1] > W)
    {
        return (knapsack(value, weight, n-1, W));
    }

    return(
        max((knapsack(value, weight, n-1, W-weight[n-1]) + value[n-1]), 
            (knapsack(value, weight, n-1, W))));
}

int main()
{
    int n;
    cin>>n;

    int weight[n];
    for(int i=0; i<n; i++)
    {
        cin>>weight[i];
    }

    int value[n];
    for(int i=0; i<n; i++)
    {
        cin>>value[i];
    }

    int W;
    cin>>W;

    cout<<knapsack(value, weight, n, W)<<endl;
    
    return 0;
}