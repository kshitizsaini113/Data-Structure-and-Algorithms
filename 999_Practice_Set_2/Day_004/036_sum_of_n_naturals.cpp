#include <iostream>

using namespace std;

int sumOfNaturals(int n)
{
    int sum = (n)*(n-1)/2;

    return sum;
}

int main()
{
    int n;
    cin>>n;

    cout<<sumOfNaturals(n)<<endl;

    return 0;
}