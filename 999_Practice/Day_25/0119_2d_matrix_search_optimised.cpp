// Given a n*m matrix.
// Write an algorithm to find the given value exists in the matrix or not.
// 
// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n1, n2;
    cin>>n1>>n2;

    int m1[n1][n2];

    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            cin>>m1[i][j];
        }
    }

    int search;
    cin>>search;

    int row = 0, column = n2-1;
    bool found = false;
    while(row<n1 and column>=0)
    {
        if(m1[row][column] == search)
        {
            found = true;
            cout<<row<<"  "<<column<<" - "<<m1[row][column];
            return 0;
        }
        else if(m1[row][column] > search)
        {
            column--;
        }
        else
        {
            row++;
        }
    }

    return -1;
}