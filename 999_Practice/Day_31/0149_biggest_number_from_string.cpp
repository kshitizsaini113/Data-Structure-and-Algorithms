// Program for creating the larget number from a given string.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;

    sort(str.begin(), str.end(), greater<int>());

    cout<<str<<endl;

    return 0;
}