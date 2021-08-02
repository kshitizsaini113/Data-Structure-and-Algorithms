#include <iostream>

using namespace std;

int factorial(int n)
{
    if(n>1)
    {
        return n * factorial(n-1);
    }
    else if (n>=0)
    { 
        return 1;
    }
    else
    {
        exit(-1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    cout<<"Factorial of " << n << " is : " << factorial(n);

    return 0;
}