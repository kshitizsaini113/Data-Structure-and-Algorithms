// Write a function to find the longest common prefix string amongst an array of strings.
// 
// If there is no common prefix, return an empty string "".

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    string str[n];
    for(int i=0; i<n; i++)
    {
        cin>>str[i];
    }

    unsigned int minLength = INT_MAX;
    for(int i=0; i<n; i++)
    {
        minLength = min(minLength, str[i].length());
    }

    int count = 0;

    for(int i=0; i<minLength; i++)
    {
        char ch1 = str[0].at(i);
        for(int j=0; j<n; j++)
        {
            if(ch1 != str[i].at(i))
            {
                cout<<count<<endl;
                return 0;
            }
        }
        count++;
    }

    cout<<count<<endl;

    return 0;
}