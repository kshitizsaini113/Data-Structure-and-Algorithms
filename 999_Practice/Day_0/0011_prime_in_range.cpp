// Program for printing all primes in the given range

#include <iostream>

using namespace std;

int main()
{
    int n1,n2;
    cin>>n1>>n2;

    for(int d=n1; d<=n2; d++)
    {
        int b;
        for(b=2; b<d; b++)
        {
            if(d%b==0)
            {
                break;
            }
        }
        if(b==d)
        {
            cout<<"Prime - "<<b<<endl;
        }
    }
    
    return 0;
}