// Program for removing all the duplicates from the String.

#include <bits/stdc++.h>

using namespace std;

string removeDuplicate(string str)
{
    if(str.length() == 0)
    {
        return "";
    }

    char ch = str[0];
    string final = removeDuplicate(str.substr(1));

    if(ch == final[0])
    {
        return final;
    }

    return (ch + final);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin>>str;

    cout<<removeDuplicate(str)<<endl;

    return 0;
}