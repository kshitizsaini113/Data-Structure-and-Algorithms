// Program for studying time complexity O(n+m).

#include <iostream>

using namespace std;

// Time complexity of an algorithm quantifies the amount of time taken by a program to 
// run as a function of length of the input.

int complexity(int n, int m)
{
    int a = 0;
    for(int i=0; i<n; i++)
    {
        a++;
    }

    for(int i=0; i<m; i++)
    {
        a++;
    }
    
    return a;
}

int main()
{
    int n, m;
    cin>>n>>m;

    cout<<complexity(n, m)<<endl;

    return 0;
}