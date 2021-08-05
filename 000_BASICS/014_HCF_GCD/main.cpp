#include <iostream>

using namespace std;

int highestCommonFactor(int num1, int num2)
{
    while(num1 != num2)
    {
        if(n1>n2)
        {
            n1-=n2;
        }
        else
        {
            n2-=n1;
        }
    }
    return num1;
}

int main()
{
    int num1, num2;

    cout<<"HCF is : "<<highestCommonFactor(num1, num2)<<endl;

    return 0;
}