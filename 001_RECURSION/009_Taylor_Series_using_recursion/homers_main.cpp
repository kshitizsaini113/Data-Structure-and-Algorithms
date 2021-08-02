#include <iostream>

using namespace std;

double taylor_homers(int x, int n)
{
    static double series = 1;

    if(n==0)
    {
        return series;
    }
    else
    {
        series = 1 + (x/n * series);
        return series;
    }
}

int main()
{
    cout<<taylor_homers(1, 10)<<endl;

    return 0;
}