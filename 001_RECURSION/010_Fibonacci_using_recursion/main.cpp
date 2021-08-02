#include <iostream>

using namespace std;

void fibonacci(int n1, int n2, int n)
{
    if(n==2)
    {
        return;
    }
    else
    {
        cout<<" -> "<<n1+n2;
        fibonacci(n2, n1+n2, n-1);
    }
}

int main()
{
    int n = 8;
    int n1 = 0, n2 = 1;
    
    cout<<n1<<" -> ";
    cout<<n2;

    fibonacci(n1, n2, n);

    return 0;
}