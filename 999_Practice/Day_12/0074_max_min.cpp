// Program for studying finding min and max element of array.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<endl;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int min_ele = INT_MAX;
    int max_ele = INT_MIN;

    for(int i=0; i<n; i++)
    {
        max_ele = max(max_ele, arr[i]);
        min_ele = min(min_ele, arr[i]);
    }

    cout<<endl<<max_ele<<" "<<min_ele<<endl;

    return 0;
}