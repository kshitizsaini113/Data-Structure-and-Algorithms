// Given an array ​ arr​ [] of size ​ N ​ . The task is to find the first repeating element in an
// array of integers, i.e., an element that occurs more than once and whose index of
// first occurrence is smallest.
// 
// 1 <= N <= 10​^6
// 0 <= Ai <= 10​^6

#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    const int N = 1e6 + 2;
    int index[N];
    fill_n(index, N, -1);

    int min_index = INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(index[arr[i]] != -1)
        {
            min_index = min(min_index, index[arr[i]]);
        }
        else
        {
            index[arr[i]] = i;
        }
    }

    if(min_index == INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<min_index<<endl;
    }
    
    return 0;
}