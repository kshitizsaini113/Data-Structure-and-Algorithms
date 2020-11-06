// Given a 32-bit signed integer, reverse digits of an integer.
// 
// Assume we are dealing with an environment that could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. 
// For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

#include <bits/stdc++.h>

using namespace std;

int reverse(int x)
{
    int rev = 0;

    while (x != 0) 
    {
        int pop = x % 10;
        x /= 10;

        if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7))
        {
            return 0;
        }
        if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8))
        {
            return 0;
        }

        rev = rev * 10 + pop;
    }
    
    return rev;
}

int main()
{
    int num;
    cin>>num;

    cout<<reverse(num)<<endl;

    return 0;
}