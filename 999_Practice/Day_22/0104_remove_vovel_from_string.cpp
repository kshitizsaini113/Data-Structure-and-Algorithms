// Given a string, remove the vowels from the string and print the string without vowels.

#include <bits/stdc++.h>

using namespace std;

void removeVovel(string& str)
{
    for(int i=0; i<str.length(); i++)
    {
        if((str.at(i) == 'a') || (str.at(i) == 'e') || (str.at(i) == 'i') || (str.at(i) == 'o') || (str.at(i) == 'u') || (str.at(i) == 'A') || (str.at(i) == 'E') || (str.at(i) == 'I') || (str.at(i) == 'O') || (str.at(i) == 'U'))
        {
            str.replace(i, 1, "");
            i--;
        }
    }
}

int main()
{
    string str;
    getline(cin, str);

    removeVovel(str);

    cout<<str<<endl;

    return 0;
}