#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n1, n2;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    if ( n1 > n2 )
    {
        cout << "Max: " << n1 << endl << "Min: " << n2 << endl;
    }
    else
    {
        cout << "Max: " << n2 << endl << "Min: " << n1 << endl;
    }

    return 0;
}