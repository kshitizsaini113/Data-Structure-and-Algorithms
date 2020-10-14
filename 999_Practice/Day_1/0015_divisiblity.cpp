// Program for checking if number is divisible by 2 or 3 or both.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    if((n%2==0) && (n%3==0))
    {
        cout<<"Divisible by both 2 and 3";
    }
    else if (n%2==0)
    {
        cout<<"Divisible by 2";
    }
    else if (n%3==0)
    {
        cout<<"Divisible by 3";
    }
    else
    {
        cout<<"Not divisible by 2 or 3";
    }
    
    return 0;
}