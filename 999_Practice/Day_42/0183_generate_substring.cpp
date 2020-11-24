// Program for generating all the subset of the given string.

#include <bits/stdc++.h>

using namespace std;

void subSequence(string str, string ans)
{
    if(str.length() == 0)
    {
        cout<<ans<<endl;
        return;
    }

    char ch = str[0];
    string ros = str.substr(1);

    subSequence(ros, ans);
    subSequence(ros, ans+ch);
}

int main()
{
    subSequence("ABC", "");

    return 0;
}