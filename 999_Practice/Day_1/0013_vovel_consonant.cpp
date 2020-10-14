// Program for checking if a character is vovel or consonant

#include <iostream>

using namespace std;

int main()
{
    char ch;
    cin>>ch;

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout<<"Vovel";
            break;
        default:
            cout<<"Consonant";
    }
    
    return 0;
}