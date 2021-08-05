#include <iostream>
#include <math.h>

using namespace std;

bool checkPrime(int num)
{
    for(int i=2; i<sqrt(n); i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cin>>num;

    if(checkPrime(num))
    {
        cout<<"Prime Number"<<endl;
    }
    else
    {
        cout<<"Not a prime number"<<endl;
    }
}