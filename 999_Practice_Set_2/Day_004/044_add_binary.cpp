#include <bits/stdc++.h>

using namespace std;

int reverse(int num)
{
    int n=0;
    while(num>0)
    {
        n*=10;
        n+=num%10;
        num/=10;
    }
    return n;
}

int addBinary(int num1, int num2)
{
    int ans=0;
    int carry=0;
    while(num1>0 && num2>0)
    {
        if(num1%2==0 && num2%2==0)
        {
            ans = ans*10 + carry;
            carry = 0;
        }
        else if((num1%2==0 && num2%2==1) || (num1%2==1 && num2%2==0))
        {
            if(carry==1)
            {
                ans = ans*10 + 0;
                carry = 1;
            }
            else
            {
                ans = ans*10 + 1;
                carry = 0;
            }
        }
        else
        {
            ans = ans*10 + carry;
            carry = 1;
        }
        num1/=10;
        num2/=10;
    }

    while(num1>0)
    {
        if(carry==1)
        {
            if(num1%2==1)
            {
                ans=ans*10 + 0;
                carry = 1;
            }
            else
            {
                ans=ans*10 + 1;
                carry = 0;
            }
        }
        else
        {
            ans = ans*10 + (num1%2);
        }
        num1/=10;
    }

    while(num2>0)
    {
        if(carry==1)
        {
            if(num2%2==1)
            {
                ans=ans*10 + 0;
                carry = 1;
            }
            else
            {
                ans=ans*10 + 1;
                carry = 0;
            }
        }
        else
        {
            ans = ans*10 + (num2%2);
        }
        num2/=10;
    }

    if(carry == 1)
    {
        ans = ans*10 + 1;
    }

    ans = reverse(ans);

    return ans;
}

int main()
{
    int num1, num2;
    cin>>num1>>num2;

    cout<<addBinary(num1, num2)<<endl;

    return 0;
}