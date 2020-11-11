#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int times;
    cin>>times;

    while(times--)
    {
        int n;
        cin>>n;

        int c[n];
        for(int i=0; i<n; i++)
        {
            cin>>c[i];
        }

        int sum1 = c[n-1];
        int sum2 = c[n-2];
        
        for(int i=n-3; i>=0; i--)
        {
            if(sum1<sum2)
            {
                sum1 += c[i];
            }
            else
            {
                sum2 += c[i];
            }
        }

        cout<<max(sum1, sum2)<<endl;
    }
}