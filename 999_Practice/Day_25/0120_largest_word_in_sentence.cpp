// Program for finding the largest word in a sentence.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr, n);
    cin.ignore();

    int i=0;
    int currentLen = 0;
    int maxLen = 0;
    int st=0, maxst=0;

    while(i<n)
    {
        if(arr[i] == ' ' || arr[i] == '\0')
        {
            if(currentLen > maxLen)
            {
                maxst = st;
                maxLen = currentLen;
            }
            st = i+1;
            currentLen=0;
        }
        else
        {
            currentLen++;
        }

        if(arr[i] == '\0')
        {
            break;
        }
        i++;
    }

    cout<<arr<<endl;
    cout<<maxLen<<endl;

    for(int i=0; i<maxLen; i++)
    {
        cout<<arr[maxst+i];
    }
    cout<<endl;

    return 0;
}