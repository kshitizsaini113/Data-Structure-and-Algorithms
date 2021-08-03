#include <iostream>

using namespace std;

int nCr(int n, int r)
{
    int result;

    if(r == 0)
    {
        result = 1;
    }
    else if(n == r)
    {
        result = 1;
    }
    else
    {
        result = nCr(n-1, r-1) + nCr(n-1, r);
    }

    return result;
}

int main()
{
    int n, r;
    cin>>n>>r;

    cout<<nCr(n, r);

    return 0;
}