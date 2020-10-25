// Program for studying time complexity O(log(n)).

#include <iostream>

using namespace std;

// Time complexity of an algorithm quantifies the amount of time taken by a program to 
// run as a function of length of the input.

int complexity(int n)
{
    int a = 0;
    for(int i=n; i>0; i/=2)
    {
        a++;
    }
    
    return a;
}

int main()
{
    int n;
    cin>>n;

    cout<<complexity(n)<<endl;

    return 0;
}