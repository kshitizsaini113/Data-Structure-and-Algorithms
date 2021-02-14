#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n = 0;
    int sum = 0;

    while ( n >= 0)
    {
        sum += n;
        cin >> n;
    }

    cout << sum << endl;

    return 0;
}