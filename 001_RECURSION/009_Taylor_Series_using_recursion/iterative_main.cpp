#include <iostream>

using namespace std;

double taylor_iterative(int x, int n)
{
    double series = 1;
    double num = 1, den = 1;

    for(int i=1; i<=n; i++)
    {
        num *= x;
        den *= i;
        series += (num/den);
    }

    return series;
}

int main()
{
    cout<<taylor_iterative(1, 10)<<endl;
    
    return 0;
}