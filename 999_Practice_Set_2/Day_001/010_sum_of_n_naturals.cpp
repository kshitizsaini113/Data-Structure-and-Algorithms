#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;

    cout << "Enter a natural number to calculate sum upto it: ";
    cin >> n;

    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += i;
    }

    cout << "Sum of first " << n << " naturals is : " << sum << endl;

    return 0;
}