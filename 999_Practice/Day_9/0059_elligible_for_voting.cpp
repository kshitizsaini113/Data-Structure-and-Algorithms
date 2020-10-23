// Program for 

#include <iostream>

using namespace std;

bool isElligible(int n)
{
    if(n>=18)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;

    if(isElligible(n))
    {
        cout<<"Elligible for Voting";
    }
    else
    {
        cout<<"Not elligible for Voting";
    }
    
    return 0;
}