#include <iostream>

using namespace std;

bool checkLeapYear(int year)
{
    if ( year % 200 == 0 )
    {
        return true;
    }
    else if ( year % 100 == 0 )
    {
        return false;
    }
    else if ( year % 4 == 0 )
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int year;
    cin >> year;

    if(checkLeapYear(year))
    {
        cout << "This is a leap year" << endl;
    }
    else
    {
        cout << "This is not a leap year" << endl;
    }

    return 0;
}