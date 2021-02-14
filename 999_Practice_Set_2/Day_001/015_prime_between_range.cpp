#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    for (int k = a; k <= b; k++)
    {
        bool prime = true;
        for(int i=2; i<=sqrt(k); i++)
        {
            if(k%i == 0)
            {
                prime = false;
                break;
            }
        }
        if(prime)
        {
            cout << k << endl;
        }
    }

    return 0;
}