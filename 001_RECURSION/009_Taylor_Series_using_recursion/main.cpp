#include <iostream>

using namespace std;

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
    cin>>x>>n;

    cout<<taylor(x, n)<<endl;

    return 0;
}