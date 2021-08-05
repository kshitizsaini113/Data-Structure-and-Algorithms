#include <iostream>

using namespace std;

bool leapYear(int year)
{
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                return true;
            }
            return false;
        }
        return true;
    }
    return false;
}

int main()
{
    int year;
    cin>>year;

    if(leapYear(year))
    {
        cout<<"Year is a leap year"<<endl;
    }
    else
    {
        cout<<"Not a leap year"<<endl;
    }

    return 0;
}