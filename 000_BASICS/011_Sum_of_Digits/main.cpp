#include <iostream>

using namespace std;

typedef long long int ll;

int sumOfDigits(int num)
{
    int sum = 0;
    
    while(num!=0)
    {
        sum += num%10;
        num/=10;
    }

    return sum;
}

int main()
{
    int num;
    cin>>num;

    cout<<"Sum of digits of the number is : "<<sumOfDigits(num)<<endl;

    return 0;
}