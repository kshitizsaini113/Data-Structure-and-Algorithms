// Isyana is given the number of visitors at her local theme park on N consecutive days. The number
// of visitors on the i-th day is Vi. A day is record braking if it satisfies both of the following
// conditions:
// 
// 1. The number of visitors on the day is strictly larger than the number of visitors on each of the
//    previous days.
// 2. Either it is the last day, or the number of visitors on the day is strictly larger than the 
//    number of visitors on the following days.
// 
// Note that the very first day could be a record braking day.
// 
// Please help Isyana find out the number of record breaking days.
// 
// 
// INPUT: The first line of input gives the number of test cases, T. T test cases follows. Each test
//        case begin with a line containing the integer N. The second line contains N integers. The
//        i-th integer is Vi.
// 
// OUTPUT: For each test case, output one line containing Case#x: y, where, x is a test case number 
//         (starting from 1) and y is the number of record breaking days.

#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n+2];
    arr[0] = -1;
    arr[n+1] = -1; 
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }

    int max_ = arr[0];
    int ans = 0;
    for(int i=1; i<=n; i++)
    {
        if(arr[i] > max_ && arr[i] > arr[i+1])
        {
            ans++;
        }
        max_ = max(max_, arr[i]);
    }
    cout << ans << endl;

    return 0;
}