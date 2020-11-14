// Program for counting the frequency of a character in string.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;

    int freq[26];
    for(int i=0; i<26; i++)
    {
        freq[i] = 0;
    }

    for(int i=0; i<str.size(); i++)
    {
        freq[str[i]-'a']++;
    }

    char ans;
    int maxFreq = 0;

    for(int i=0; i<26; i++)
    {
        if(freq[i]>maxFreq)
        {
            maxFreq = freq[i];
            ans = i+'a';
        }
    }

    cout<<maxFreq<<" - "<<ans<<endl;
    
    return 0;
}