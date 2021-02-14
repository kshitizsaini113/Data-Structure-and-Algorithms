#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;

    cout<<"Enter the number to check: ";
    cin>>n;

    if( n % 2 == 0 )
    {
        cout << "Even" << endl; 
    }
    else
    {
        cout << "Odd" << endl;
    }

    return 0;
}