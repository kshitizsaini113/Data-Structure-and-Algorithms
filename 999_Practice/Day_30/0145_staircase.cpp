// Staircase detail
// 
// This is a staircase of size 4:
//    #
//   ##
//  ###
// ####
// 
// Its base and height are both equal to . It is drawn using # symbols and spaces. The last line is not preceded by any spaces.
// 
// Write a program that prints a staircase of size.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i+j<n-1)
            {
                cout<<"  ";
            }
            else
            {
                cout<<"# ";
            }
        }
        cout<<endl;
    }

    return 0;
}