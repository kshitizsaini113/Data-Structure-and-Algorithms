// Program for studying time complexity.

#include <iostream>

using namespace std;

// Space complexity of an algorithm quantifies the amount of memory taken by a program to
// run as a function of length of the input.
// It is directly proportional to the largest memory program acquires at any
// instance during the run time.

int complexity_one(int n)
{
    int a = 0;
    for(int i=0; i<n; i++)
    {
        a++;
    }

    return a;
}

void complexity_n(int n)
{
    int a[n];
    for(int i=0; i<n; i++)
    {
        a[i] = i;
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;

    cout<<complexity_one(n)<<endl;

    complexity_n(n);

    return 0;
}