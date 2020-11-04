// Given a roman numeral, convert it to an integer.

#include <bits/stdc++.h>

using namespace std;

int value(char ch)
{
    switch(ch)
    {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            exit(-1);
    }
}

int romanToDecimal(string& str)
{
    int result = 0;

    for(int i=0; i<str.length(); i++)
    {
        int s1 = value(str[i]);
        if(i+1 < str.length())
        {
            int s2 = value(str[i+1]);

            if(s1 >= s2)
            {
                result = result + s1;
            }
            else
            {
                result = result + s2 - s1;
                i++;
            }
        }
        else
        {
            result = result + s1;
        }
    }

    return result;
}

int main()
{
    string str;
    cin>>str;

    cout<<romanToDecimal(str)<<endl;

    return 0;
}