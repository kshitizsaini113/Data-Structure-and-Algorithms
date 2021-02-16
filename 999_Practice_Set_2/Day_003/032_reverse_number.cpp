#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;

    int revNum=0;

    for(; num>0; num/=10)
    {
        revNum*=10;
        revNum+=num%10;
    }

    cout<<revNum<<endl;

    return 0;
}