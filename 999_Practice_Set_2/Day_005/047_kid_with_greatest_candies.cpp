// Given the array candies and the integer extraCandies, where candies[i] represents the number of candies that the ith kid has.

// For each kid check if there is a way to distribute extraCandies among the kids such that he or she can have the greatest number of candies among them. Notice that multiple kids can have the greatest number of candies.

#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    int max = INT_MIN;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    int extra;
    cin>>extra;

    for(int i=0; i<n; i++)
    {
        if(arr[i] + extra > max)
        {
            cout<<"true  ";
        }
        else
        {
            cout<<"false  ";
        }
    }
    cout<<endl;

    return 0;
}