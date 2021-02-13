#include <iostream>

using namespace std;

int main()
{
    int arr[] = {12, 15, 5, 19, 74, 2, 7};

    int n = sizeof(arr)/sizeof(arr[0]);

    int min = arr[0];
    int max = arr[0];

    for(int i=1; i<n; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
        if(max < arr[i])
        {
            max = arr[i];
        }
    }

    cout<<min<<"  "<<max<<endl;

    return 0;
}