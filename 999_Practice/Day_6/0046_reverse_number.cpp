// Program for reversing a number

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int rev=0;

    for(;n>0;n/=10)
    {
        rev*=10;
        rev += n%10;
    }

    cout<<rev<<endl;

    return 0;
}
