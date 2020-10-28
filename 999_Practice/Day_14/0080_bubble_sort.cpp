// Program for implementing Bubble Sort.
// 
// Time COmplexity -> O(n2) <-> n square

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

    int counter = 0;
    while(counter < n-1)
    {
        for(int i=0; i<n-counter-1; i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

    return 0;
}