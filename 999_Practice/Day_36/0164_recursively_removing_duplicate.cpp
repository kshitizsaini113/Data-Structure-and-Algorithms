// Given a string s, recursively remove adjacent duplicate characters from the string s. The output string should not have any 
// adjacent duplicates.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;

    string temp = "";
    temp = temp + str[0];
    cout<<temp<<endl;

    for(int i=1; i<str.length(); i++)
    {
        if(str.at(i-1) != str.at(i))
        {
            temp = temp + str.at(i);
        }
    }

    cout<<temp<<endl;

    return 0;
}