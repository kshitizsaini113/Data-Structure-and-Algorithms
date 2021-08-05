#include <iostream>

using namespace std;

bool checkArmstrong(int num)
{
    int digit=0, temp=num;
    while(temp!=0)
    {
        digit++;
        temp/=10;
    }
    int sum = 0;
    for(temp=num; temp!=0; temp/=10)
    {
        sum += pow(temp%10, digit);
    }
    if(sum == num)
    {
        return true;
    }
    return false;
}

int main()
{   
    int num;
    cin>>num;

    bool result = checkArmstrong(num);

    if(result)
    {
        cout<<"Armstrong Number"<<endl;
    }
    else
    {
        cout<<"Not an armstrong number"<<endl;
    }

    return 0;
}