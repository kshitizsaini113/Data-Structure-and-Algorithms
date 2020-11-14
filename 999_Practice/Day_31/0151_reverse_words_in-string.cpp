// Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    string str;
    cin>>str;
    string result="";

    int st=0;
    int en;
    int last=0;

    for(int i=0; i<str.size(); i++)
    {
        if(str.at(i)=='.')
        {
            string temp="";
            en=i;
            for(int i=st; i<en; i++)
            {
                temp += str[i];
            }
            result = "." + temp + result;
            st=i+1;
            last = i;
        }
    }
    
    string temp ="";
    for(int i=last+1; i<str.length(); i++)
    {
        temp += str[i];
    }
    result = temp + result;

    cout<<result<<endl;
    return 0;
}