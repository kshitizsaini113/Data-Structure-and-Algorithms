// Program for print the N integers of the array in the reverse order, space-separated on a single line.

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

    for(int i=n-1; i>=0; i--)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

    return 0;
}