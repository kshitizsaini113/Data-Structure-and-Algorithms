#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else if (n>1)
    { 
        return n * factorial(n-1);
    }
    else
    {
        return -1;
    }
}

int main()
{
    int n;
    printf("Enter a non-negative number : ");
    scanf("%d", &n);
    if(factorial(n) == -1)
    {
	printf("%d is a negative number. Factorial doesn't exist for a negative number!\n", n);
    }
    else
    {
	printf("Factorial of %d is : %d", n, factorial(n));
    }

    return 0;
}
