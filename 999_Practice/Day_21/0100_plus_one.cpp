// Given a non-empty array of digits representing a non-negative integer, 
// increment one to the integer.
// 
// The digits are stored such that the most significant digit is at the 
// head of the list, and each element in the array contains a single digit.

// You may assume the integer does not contain any leading zero, except the number 
// 0 itself.

#include <bits/stdc++.h>

using namespace std;

void plusOne(int arr[], int n)
{
    int temp = n;

    arr[--n] += 1;

    while (arr[n] > 9)
    {
        arr[n] -= 10;
        arr[--n] += 1;
    }
    
    for(int i=0; i<temp; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

    return;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    plusOne(arr, n);

    return 0;
}