// Program for printing the prime factors using Sieve of Eratosthenes

#include <bits/stdc++.h>

using namespace std;

void primeFactor(int n)
{
    int prime[n]={0};

    for(int i=2; i<=n; i++)
    {
        prime[i] = i;
    }

    for(int i=2; i<=n; i++)
    {
        if(prime[i] == i)
        {
            for(int j = i*i; j<=n; j+=i)
            {
                if(prime[j] == j)
                {
                    prime[j] = i;
                }
            }
        }
    }
    
    while(n!=1)
    {
        cout<<prime[n]<<"  ";
        n = n/prime[n];
    }
}

int main()
{
    int n;
    cin>>n;

    primeFactor(n);
    
    return 0;
}