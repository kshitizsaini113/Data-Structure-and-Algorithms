// Program for checking if a character is vovel or consonant

#include <iostream>

using namespace std;

int main()
{
    char ch;
    cin>>ch;

    if(ch=='a' || ch =='e' || ch=='i' || ch=='o' || ch=='u')
    {
        cout<<"Vovel";
    }
    else
    {
        cout<<"Consonant";
    }
    
    return 0;
}