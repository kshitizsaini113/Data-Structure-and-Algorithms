#include <iostream>
#include <math.h>

using namespace std;

int binaryToDecimal(int binary)
{
    int decimal=0;
    for(int i=0; binary>0; binary/=10, i++)
    {
        if(binary%10)
        {
            decimal += pow(2,i);
        }
    }
    return decimal;
}

int main()
{
    int binary;
    cin>>binary;

    cout<<binaryToDecimal(binary)<<endl;

    return 0;
}