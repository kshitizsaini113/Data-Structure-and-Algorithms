// Program for printing multiplication table

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int d=1; d<=10; d++)
    {
        cout<<n<<" * "<<d<<" = "<<n*d<<endl;
    }
    
    return 0;
}