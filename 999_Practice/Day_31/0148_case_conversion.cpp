// Program for changing the case of string.

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    cin>>str;

    for(int i=0; i<str.length(); i++)
    {
        if(str.at(i)>='a' && str.at(i)<='z')
        {
            str.at(i) -= 32;
        }
    }
    cout<<str<<endl;

    for(int i=0; i<str.length(); i++)
    {
        if(str.at(i)>='A' && str.at(i)<='Z')
        {
            str.at(i) += 32;
        }
    }
    cout<<str<<endl;

    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<<str<<endl;

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<<str<<endl;

    return 0;
}