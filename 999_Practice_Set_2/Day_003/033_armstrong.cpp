#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num;
    cin>>num;

    int count=0;

    for(int temp=num; temp>0; temp/=10)
    {
        count++;
    }

    int arm=0;

    for(int temp=num; temp>0; temp/=10)
    {
        arm += pow(temp%10, count);
    }

    if(num == arm)
    {
        cout<<"Armstrong Number"<<endl;
    }
    else
    {
        cout<<"Not an armstrong number"<<endl;
    }

    return 0;
}