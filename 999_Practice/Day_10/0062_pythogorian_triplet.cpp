// Program for checking pythogorian triplet

#include <iostream>

using namespace std;

bool pythogorian(int n1, int n2, int n3)
{
    int a = max(n1, max(n2, n3));
    int b, c;

    if(a == n1)
    {
        b=n2;
        c=n3;
    }
    else if (a == n2)
    {
        b=n3;
        c=n1;
    }
    else
    {
        b=n1;
        c=n2;
    }
    
    if(a*a == b*b + c*c)
    {
        return true;
    }
    return false;
}

int main()
{
    int n1, n2, n3;
    cin>>n1>>n2>>n3;

    if(pythogorian(n1, n2, n3))
    {
        cout<<"Pythogotian Triplet"<<endl;
    }
    else
    {
        cout<<"Not a pythogorian triplet"<<endl;
    }
    
    
    return 0;
}