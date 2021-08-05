#include <iostream>

using namespace std;

int greaterOfThree(int num1, int num2, int num3)
{
    if(num1>num2 && num1>num3)
    {
        return num1;
    }
    else if(num2>num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}

int main()
{
    int num1, num2, num3;
    cin>>num1>>num2>>num3;

    cout<<greaterOfThree(num1, num2, num3)<<" is the greatest number."<<endl;

    return 0;
}