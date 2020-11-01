// Divya is given the number of visitors at her local theme park on N consecutive days. The
// number of visitors on the ith day is Vi. A day is record breaking if it satisfirs both the 
// following conditions:
// -> The number of visitors on the day is strictly larger than the number of visitors on each
//    of the previous days.
// -> Either it is the last day, or the number of visitors on the day is strictly larger than the
//    number of visitors on the following day.
// 
// NOTE: First day could be a record breaking day.
// 
// Please help Divya find out the number of record breaking days.

// INPUT
// The first line of the input gives the number of test cases T. T test cases follow.
// Each test case begins with a line containing integer N. The second line contains
// N integers. ith integer is Vi.

// OUTPUT
// For each test case, output one line containing Case x: y, where x is the test case
// number (starting from 1) and y is number of record breaking days.

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

    if(n == 1)
    {
        cout<<"1"<<endl;
    }

    int ans=0;
    int mx=INT_MIN;

    for(int i=0; i<n; i++)
    {
        if(i==n-1)
        {
            if(a[i]>mx)
            {
                ans++;
            }
        }
        else if(a[i]>mx && a[i]>a[i+1])
        {
            ans++;
        }
        mx = max(mx, a[i]);
    }

    cout<<ans<<endl;

    return 0;
}