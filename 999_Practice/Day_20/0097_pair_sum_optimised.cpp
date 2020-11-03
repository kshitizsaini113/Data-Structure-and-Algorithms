// Optimised approach for pair sum in case of sorted array.

#include<bits/stdc++.h>

using namespace std;

bool pairsum(int arr[], int n, int k)
{
    int low=0;
    int high=n-1;

    while(low<high)
    {
        if(arr[low] + arr[high] == k)
        {
            cout<<low<<"  "<<high<<endl;
            return true;
        }
        else if (arr[low] + arr[high] < k)
        {
            low++;
        }
        else
        {
            high--;
        }
    }
}

int main()
{
    int arr[]={2, 4, 7, 11, 14, 16, 20, 21};
    int k=31;

    cout<<pairsum(arr, 8, k)<<endl;

    return 0;
}