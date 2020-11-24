// Program for moving all the x to end of string.

#include <bits/stdc++.h>

using namespace std;

string moveX(string str)
{
    if(str.length() == 0)
    {
        return "";
    }

    char ch = str[0];

    string ans = moveX(str.substr(1));

    if(ch == 'x')
    {
        return (ans + ch);
    }

    return (ch + ans);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin>>str;

    cout<<moveX(str)<<endl;

    return 0;
}