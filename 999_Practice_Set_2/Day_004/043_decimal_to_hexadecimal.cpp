#include <iostream>
#include <string>

using namespace std;

string decimalToHexadecimal(int decimal)
{
    string hexaDecimal = "";
    int x = 1;
    while ( x <= decimal )
    {
        x*=16;
    }
    x/=16;

    while ( x>0 )
    {
        int last = decimal/x;
        decimal-=last*x;
        x/=16;
        if(last<10)
        {
            hexaDecimal += to_string(last);
        }
        else if(last==10)
        {
            hexaDecimal+="A";
        }
        else if(last==11)
        {
            hexaDecimal+="B";
        }
        else if(last==12)
        {
            hexaDecimal+="C";
        }
        else if(last==13)
        {
            hexaDecimal+="D";
        }
        else if(last==14)
        {
            hexaDecimal+="E";
        }
        else if(last==15)
        {
            hexaDecimal+="F";
        }
    }

    return hexaDecimal;
}

int main()
{
    int n;
    cin>>n;

    cout<<decimalToHexadecimal(n)<<endl;

    return 0;
}