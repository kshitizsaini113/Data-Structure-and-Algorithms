#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
    {
        cout << "Vovel" << endl;
    }
    else
    {
        cout << "Consonant" << endl;
    }

    return 0;
}