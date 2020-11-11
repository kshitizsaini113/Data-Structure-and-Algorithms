// Lapindrome is defined as a string which when split in the middle, gives two halves having the same characters and 
// same frequency of each character. If there are odd number of characters in the string, we ignore the middle character 
// and check for lapindrome. For example gaga is a lapindrome, since the two halves ga and ga have the same characters with 
// same frequency. Also, abccab, rotor and xyzxy are a few examples of lapindromes. Note that abbaab is NOT a lapindrome. 
// The two halves contain the same characters but their frequencies do not match.
// 
// Your task is simple. Given a string, you need to tell if it is a lapindrome.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int times;
    cin>>times;

    while(times--)
    {
        string str;
        cin>>str;

        int mid = str.length()/2;
        int st1, en1;
        int st2, en2;

        const int SIZE=sizeof(char)*256;

        int arr1[SIZE];
        int arr2[SIZE];
        for(int i=0; i<SIZE; i++)
        {
            arr1[i] = 0;
            arr2[i] = 0;
        }

        if(str.length()%2 == 0)
        {
            st1 = 0;
            en2 = str.length()-1;
            en1 = mid - 1;
            st2 = mid;
        }
        else
        {
            st1 = 0;
            en2 = str.length()-1;
            en1 = mid - 1;
            st2 = mid + 1;
        }

        bool is_lapindrome = true;

        for(int i=st1; i<=en1; i++)
        {
            arr1[str.at(i)]++;
        }
        for(int i=st2; i<=en2; i++)
        {
            arr2[str.at(i)]++;
        }

        for(int i=0; i<SIZE; i++)
        {
            if(arr1[i] != arr2[i])
            {
                is_lapindrome = false;
            }
        }

        if(is_lapindrome)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
