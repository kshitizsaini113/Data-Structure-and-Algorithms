// Program for printing all odds till n

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int d=1; d<=n; d++)
    {
        if(d%2==0)
        {
            continue;
        }
        cout<<d<<" ";
    }
    
    return 0;
}