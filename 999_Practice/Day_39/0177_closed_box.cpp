// Program for printing pattern.

#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int n;
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        cout<<"#";
    }
    cout<<endl;

    for(int i=1; i<n-1; i++)
    {
        cout<<"*";
        for(int j=0; j<n-2; j++)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;
    }

    for(int i=0; i<n; i++)
    {
        cout<<"#";
    }
    cout<<endl;

    return 0;
}