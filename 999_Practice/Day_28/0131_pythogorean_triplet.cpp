// Given an array arr of N integers, write a function that returns true if there is a triplet (a, b, c) that satisfies
//  a^2 + b^2 = c^2, otherwise false.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    const int SIZE=1e7;
    int hash[SIZE];
    for(int i=0; i<SIZE; i++)
    {
        hash[i] = 0;
    }

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        hash[arr[i]]++;
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            double t = sqrt((pow(arr[i], 2) + pow(arr[j], 2)));
            if(hash[int(t)] == 1)
            {
                cout<<"*";
            }
        }
    }

    return 0;
}