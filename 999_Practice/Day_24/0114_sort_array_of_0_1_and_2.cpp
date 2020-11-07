// Given an array A of size N containing 0s, 1s, and 2s; you need to sort the array in ascending order.

#include <iostream>

using namespace std;

int main()
{
    int temp[3];
    for(int i=0; i<3; i++)
    {
        temp[i] = 0;
    }

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        temp[arr[i]]++;
    }

    for(int i=0; i<temp[0]; i++)
    {
        cout<<"0 ";
    }
    for(int i=0; i<temp[1]; i++)
    {
        cout<<"1 ";
    }
    for(int i=0; i<temp[2]; i++)
    {
        cout<<"2 ";
    }
    cout<<endl;
    
    return 0;
}