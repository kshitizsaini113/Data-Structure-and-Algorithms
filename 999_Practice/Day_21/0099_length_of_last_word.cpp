// Given a string s consists of upper/lower-case alphabets and empty space 
// characters ' ', return the length of last word (last word means the last 
// appearing word if we loop from left to right) in the string.
// 
// If the last word does not exist, return 0.

#include <bits/stdc++.h>

using namespace std;

int lengthOfLastWord(string& str)
{
    int length = 0;
    
    for(int i=0; i<str.length(); i++)
    {
        if(str.at(i) == ' ')
        {
            length = 0;
        }
        else
        {
            length++;
        }
    }
    return length;
}

int main()
{
    string str = "Hello   ";
    cout<<lengthOfLastWord(str)<<endl;

    str = "Hey Kshitiz";
    cout<<lengthOfLastWord(str)<<endl;

    return 0;
}