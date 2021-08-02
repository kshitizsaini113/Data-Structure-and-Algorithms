#include <stdio.h>

double taylor(int x, int n)
{
    static double num = 1, den = 1;
    double series;

    if(n==0)
    {
        return 1;
    }
    else
    {
        series = taylor(x, n-1);
        num *= x;
        den *= n;
        return series + num/den;
    }
}

int main()
{
    int x, n;
    scanf("%d %d", &x, &n);

    printf("e ^ %d = %lf", x, taylor(x, n));

    return 0;
} 