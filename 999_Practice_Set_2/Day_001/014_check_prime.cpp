#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;
    bool prime = true;

    cout << "Enter the number to check: ";
    cin >> n;

    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i == 0)
        {
            prime = false;
            cout << "Not a prime" << endl;
            break;
        }
    }

    if(prime)
    {
        cout << "Prime Number" << endl;
    }

    return 0;
}