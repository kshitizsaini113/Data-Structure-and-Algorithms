#include <iostream>

using namespace std;

int decimalToBinary(int decimal)
{
    int x = 1;
    int binary=0;
    while(x <= decimal)
    {
        x*=2;
    }
    x/=2;

    while(x>0)
    {
        int last = decimal/x;
        decimal-=last*x;
        x/=2;
        binary*=10;
        binary+=last;
    }

    return binary;
}

int main()
{
    int n;
    cin>>n;

    cout<<decimalToBinary(n)<<endl;

    return 0;
}