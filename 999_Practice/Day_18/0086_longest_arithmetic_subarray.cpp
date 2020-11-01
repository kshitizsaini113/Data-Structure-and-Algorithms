// An arithmetic array is an array that contains atleast two integers and the differences
// between consecutive integers are equal. For example [9, 10], [3, 3, 3] and [9, 7, 5, 3] are
// arithmetic arrays while [1, 3, 2, 7], [2, 1, 2]  and [1, 2, 4] are non arithmetic arrays.
// 
// Sarasvati has an array of N non-negative integers. The i-th integer of the array is Ai. She
// wants to choose a contiguous arithmetic subarray from her array that has the maximum length.
// Please help her to determine the longest continuous arithmetic subarray.

// INPUT
// The first line of the input gives the number of test cases, T. T test cases follows. Each test 
// case begins with a line containing the integer N. The second line contains N integers.
// The ith integer is Ai.

// OUTPUT
// For each test case, output one line containing Case #x: y, where x is the test case number 
// (starting from 1) anf y is length of the longest contiguous arithmetic subarray.

// CONSTRAINS
// Time Limit: 20 sec per test
// Memory Limit: 1GB
// 
// 1 <= T <= 100
// 0 <= Ai <= 10^9
// 
// Test Case 1:
// 2 <= N <= 2000
// 
// Test Case 2:
// 2 <= N <= 2 * 10^5  (for atmost 10 test cases)
// 
// For remaining cases, 2 <= N <= 2000

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int ans=2;
    int pd=a[1]-a[0];
    int j=2;
    int current=2;

    while(j<n)
    {
        if(pd == a[j]-a[j-1])
        {
            current++;
        }
        else
        {
            pd = a[j]-a[j-1];
            current=2;
        }
        ans=max(current, ans);
        j++;
    }

    cout<<ans;

    return 0;
}