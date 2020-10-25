// Program for studying time complexity.

#include <iostream>

using namespace std;

// Time complexity of an algorithm quantifies the amount of time taken by a program to 
// run as a function of length of the input.

int complexity_n(int n)
{
    int a = 0;
    for(int i=0; i<n; i++)
    {
        a++;
    }

    return a;
}

int complexity_n2(int n)
{
    int a = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            a++;
        }
    }

    return a;
}

int main()
{
    int n;
    cin>>n;

    cout<<complexity_n(n)<<endl;

    cout<<complexity_n2(n)<<endl;

    return 0;
}