// Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string& str)
{
    int end = str.length() - 1;
    int start = 0;

    while(start < end)
    {
        if(str.at(start) == str.at(end))
        {
            start++;
            end--;
        }
        else
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string str;
    cin>>str;

    cout<<isPalindrome(str)<<endl;

    return 0;
}