// Program for finding running array sum.
// 
// Given the array candies and the integer extraCandies, 
// where candies[i] represents the number of candies that the ith kid has.
// 
// For each kid check if there is a way to distribute extraCandies among the kids 
// such that he or she can have the greatest number of candies among them. 
// Notice that multiple kids can have the greatest number of candies.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int candies[n];
    for(int i=0; i<n; i++)
    {
        cin>>candies[i];
    }

    int extraCandies;
    cin>>extraCandies;

    int max_ele = INT_MIN;

    for(int i=0; i<n; i++)
    {
        max_ele = max(max_ele, candies[i]);
    }

    for(int i=0; i<n; i++)
    {
        if(candies[i]+extraCandies > max_ele)
        {
            cout<<"true   ";
        }
        else
        {
            cout<<"false   ";
        }
    }

    return 0;
}