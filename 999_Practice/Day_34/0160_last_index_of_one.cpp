// Given a string S consisting only '0's and '1's,  print the last index of the '1' present in it.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;

    int lastIndex = -1;

    for(int i=str.length()-1; i>=0; i--)
    {
        if(str.at(i) == '1')
        {
            lastIndex = i;
            break;
        }
    }

    cout<<lastIndex<<endl;
    
    return 0;
}