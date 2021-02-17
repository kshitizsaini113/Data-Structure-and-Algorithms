#include <iostream>

using namespace std;

int decimalToOctal(int decimal)
{
    int x = 1;
    int octal=0;
    while(x <= decimal)
    {
        x*=8;
    }
    x/=8;

    while(x>0)
    {
        int last = decimal/x;
        decimal-=last*x;
        x/=8;
        octal*=10;
        octal+=last;
    }

    return octal;
}

int main()
{
    int decimal;
    cin>>decimal;

    cout<<decimalToOctal(decimal)<<endl;

    return 0;
}