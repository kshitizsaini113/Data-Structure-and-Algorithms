// Reversing a string using recursion.

#include <bits/stdc++.h>

using namespace std;

void reverse(string str)
{
    if(str.length() == 0)
    {
        return;
    }
    
    string rev = str.substr(1);
    reverse(rev);

    cout<<str[0];
}

int main()
{
    string str;
    cin>>str;

    reverse(str);

    return 0;
}