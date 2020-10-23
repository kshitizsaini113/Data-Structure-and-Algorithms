// Program for printing fibonacci sequence.

#include <iostream>

using namespace std;

void fib(int n)
{
    int t1=0;
    int t2=1;
    cout<<t1<<"  ";
    for(int i=1; i<n; i++)
    {
        int temp=t2;
        t2=t2+t1;
        t1=temp;
        cout<<t1<<"  ";
    }
}

int main()
{
    int n;
    cin>>n;

    fib(n);
}