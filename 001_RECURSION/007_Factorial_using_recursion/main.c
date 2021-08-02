#include <stdio.h>
#include <stdlib.h>

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

    printf("Factorial of %d is : %d", n, factorial(n));

    return 0;
}