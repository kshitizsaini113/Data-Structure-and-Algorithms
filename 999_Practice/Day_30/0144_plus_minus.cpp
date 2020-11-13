// Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. 
// Print the decimal value of each fraction on a new line with  places after the decimal.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    float positive=0;
    float negative=0;
    float zero=0;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
        {
            zero++;
        }
        else if(arr[i]>0)
        {
            positive++;
        }
        else
        {
            negative++;
        }
    }

    cout<<setprecision(6)<<positive/n<<endl;
    cout<<setprecision(6)<<negative/n<<endl;
    cout<<setprecision(6)<<zero/n<<endl;

    return 0;
}