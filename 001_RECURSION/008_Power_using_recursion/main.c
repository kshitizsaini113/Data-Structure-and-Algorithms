#include <stdio.h>
#include <stdlib.h>

int power(int m, int n)
{
    if(n > 0)
    {
        return m * power(m, n-1);
    }
    else if (n == 0)
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
    int m, n;
    scanf("%d %d", &m, &n);

    printf("%d ^ %d = %d", m, n, power(m, n));

    return 0;
}