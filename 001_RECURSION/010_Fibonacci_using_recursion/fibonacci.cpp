#include <iostream>

using namespace std;

int fibonacci(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return fibonacci(n-2) + fibonacci(n-1);
    }
}

int main()
{
    cout<<fibonacci(99)<<endl;

    return 0;
}