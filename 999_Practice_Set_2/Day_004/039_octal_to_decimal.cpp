#include <iostream>
#include <math.h>

using namespace std;

int octalToDecimal(int octal)
{
    int decimal = 0;
    for(int i=0; octal>0; octal/=10, i++)
    {
        decimal += octal%10 * pow(8, i);
    }
    return decimal;
}

int main()
{
    int n;
    cin>>n;

    cout<<octalToDecimal(n)<<endl;

    return 0;
}