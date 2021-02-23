#include <iostream>

using namespace std;

int reverseNumber( int number )
{
    int reverseNum = 0;

    while( number > 0 )
    {
        reverseNum *= 10;
        reverseNum += number % 10;
        number /= 10;
    }

    return reverseNum;
}

int main()
{
    int number;
    cin >> number;

    cout << reverseNumber(number) << endl;

    return 0;
}