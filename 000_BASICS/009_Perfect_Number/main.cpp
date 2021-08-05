#include <iostream>

using namespace std;

typedef long long int ll;

bool checkPerfectNumber(int num)
{
    int perfect = 0;
    
    for(int i=0; i<n; i++)
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

    if(checkPerfectNumber(num))
    {
        cout<<"Perfect Number"<<endl;
    }
    else
    {
        cout<<"Not a perfect number"<<endl;
    }
}