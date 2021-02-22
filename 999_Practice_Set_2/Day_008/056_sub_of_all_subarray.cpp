#include <iostream>

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

    for(int i=0; i<n; i++)
    {
        cout<<i<<":   ";
        int sum_of_subarray=0;
        for(int j=i; j<n; j++)
        {
            sum_of_subarray+=arr[j];
            cout<<sum_of_subarray<<" ";
        }
        cout<<endl;
    }

    return 0;
}