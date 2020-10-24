// Program for adding first n naturals

#include <iostream>

using namespace std;

int sum(int n)
{
    return (n*(n+1)/2);
}

int main()
{
    int n;
    cin>>n;

    cout<<sum(n)<<endl;
    
    return 0;
}