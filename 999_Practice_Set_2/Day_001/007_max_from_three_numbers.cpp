#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    int max;

    if( n1 > n2 )
    {
        if( n1 > n3 )
        {
            max = n1;
        }
        else
        {
            max = n3;
        }
    }
    else
    {
        if( n2 > n3 )
        {
            max = n2;
        }
        else
        {
            max = n3;
        }
    }

    cout << "Max: " << max << endl;

    return 0;
}