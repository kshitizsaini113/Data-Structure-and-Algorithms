// Given a string S. The task is to print all permutations of a given string.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;

    sort(str.begin(), str.end());
    do
    {
        cout<<str<<" ";
    } while (next_permutation(str.begin(), str.end()));
    cout<<endl;
    
    return 0;
}