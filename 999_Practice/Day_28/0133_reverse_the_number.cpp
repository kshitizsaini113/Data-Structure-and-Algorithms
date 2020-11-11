// Given an Integer N, write a program to reverse it.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int times;
    cin>>times;

    while(times--)
    {
        int num;
        cin>>num;

        int rev=0;
        while(num>0)
        {
            rev *= 10;
            rev += num%10;
            num = num/10;
        }

        cout<<rev<<endl;
    }

    return 0;
}