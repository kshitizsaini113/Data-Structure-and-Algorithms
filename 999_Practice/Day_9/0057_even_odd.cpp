// Program for 

#include <iostream>

using namespace std;

bool isEven(int n)
{
    return !(n%2);
}

int main()
{
    int n;
    cin>>n;

    if(isEven(n))
    {
        cout<<"Even";
    }
    else
    {
        cout<<"Odd";
    }
    
    return 0;
}