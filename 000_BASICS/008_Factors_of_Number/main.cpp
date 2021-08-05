#include <iostream>

using namespace std;

typedef long long int ll;

bool perfectNumber(int num)
{
    int perfect = 0;
    for(int i=1; i<n; i++)
    {
        if(n%i==0)
        {
            perfect+=i;
        }
    }
    if(perfect==num)
    {
        return true;
    }
    return false;
}

int main()
{
    int num;
    cin>>num;

    if(perfectNumber(num))
    {
        cout<<"Number is a perfect number"<<endl;
    }
    else
    {
        cout<<"Not a perfect number"<<endl;
    }

    return 0;
}