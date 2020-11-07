// You are given a string S with length N. Determine if it is possible to find two non-empty strings A and B which 
// satisfy the following conditions:
// 
// A+B=S, where + denotes string concatenation
// B is a substring of A
// 
// Note: B is a substring of A if B can be obtained from A by deleting several (possibly zero) characters from the 
// beginning and several (possibly zero) characters from the end. For example, "ab" is a substring of "cabd", but "ad" is not.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        char c = s[s.length()-1];
        bool ans = false;
        for(int i=0; i<s.length()-1; i++)
        {
            if(c == s.at(i))
            {
                ans = true;
                break;
            }
        }

        if(ans == true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}