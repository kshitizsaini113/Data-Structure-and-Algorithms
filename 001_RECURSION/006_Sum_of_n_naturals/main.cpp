#include <iostream>

using namespace std;

int SumOfNNaturals(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return n + SumOfNNaturals(n-1); 
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    
    cout<<"The sum of " << n << " naturals number is : " << SumOfNNaturals(n);

    return 0;
}