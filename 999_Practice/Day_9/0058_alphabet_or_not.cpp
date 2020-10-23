// Program for 

#include <iostream>

using namespace std;

bool isAlphabet(char ch)
{
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        return true;
    }
    return false;
}

int main()
{
    char ch;
    cin>>ch;

    if(isAlphabet(ch))
    {
        cout<<"Is an alphabet";
    }
    else
    {
        cout<<"Not an alphabet";
    }
    
    return 0;
}