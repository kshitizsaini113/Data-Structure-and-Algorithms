#include <stdio.h>

int SumOfNNaturals(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return n + SumOfNNaturals(n-1); 
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("The sum of %d naturals number is : %d", n, SumOfNNaturals(n));

    return 0;
}