#include <iostream>

using namespace std;

typedef long long int ll;

bool checkPalindrome(int num)
{
    int revNum=0, temp=num;

    while(temp!=0)
    {
        revNum*=10;
        revNum+=temp%10;
        temp/=10;
    }
    if(num == revNum)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num;
    cin>>num;

    if(checkPalindrome(num))
    {
        cout<<"Palindrome Number"<<endl;
    }
    else
    {
        cout<<"Not a palindrome number"<<endl;
    }

    return 0;
}