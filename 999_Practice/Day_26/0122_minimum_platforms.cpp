// Given arrival and departure times of all trains that reach a railway station. 
// Your task is to find the minimum number of platforms required for the railway station so that no train waits.
// 
// Note: Consider that all the trains arrive on the same day and leave on the same day. Also, arrival and departure times will 
// not be same for a train, but we can have arrival time of one train equal to departure of the other. 
// In such cases, we need different platforms, i.e at any given instance of time, same platform can not be used for both 
// departure of a train and arrival of another.

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int h[5005];
    
    int t;
    cin>>t;
   
    while(t--)
    {
        int n;
        cin>>n;
        
        int a[n];
        int d[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int j=0;j<n;j++)
        {
            cin>>d[j];
        }
        
        for(int i=0;i<5005;i++)
        {
            h[i]=0;
        }
        
        for(int i=0;i<n;i++)
        {
            h[a[i]]++;
            h[d[i]]--;
        }
        
        int res=1;
        
        for(int i=1;i<5005;i++)
        {
            h[i]=h[i]+h[i-1];
            res=max(res,h[i]);
        }
        cout<<res<<endl;
    }
    
    return 0;
}