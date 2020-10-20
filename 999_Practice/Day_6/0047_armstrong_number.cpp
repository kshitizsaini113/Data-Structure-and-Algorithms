// Program for checking if armstrong number or not

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int digits=0, temp=n;

    for(;temp>0;temp/=10)
    {
        digits++;
    }

    temp=n;
    int armstrong=0;

    for(;temp>0;temp/=10)
    {
        int t=temp%10;
        armstrong = armstrong + pow(t,digits);
    }

    if(armstrong==n)
    {
        cout<<"Armstrong Number"<<endl;
    }
    else
    {
        cout<<"Not an Armstrong Number"<<endl;
    }
    

    return 0;
}
