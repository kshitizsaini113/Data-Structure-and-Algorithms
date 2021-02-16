#include <iostream>

using namespace std;

int factorial(int n)
{
    int fact = 1;
    for(int i=1; i<=n; i++)
    {
        fact *= i;
    }

    if(n>=0)
    {
        return fact;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int n;
    cin>>n;

    cout<<factorial(n)<<endl;
}