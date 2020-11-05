// There is a special keyboard with all keys in a single row.
// 
// Given a string keyboard of length 26 indicating the layout of the keyboard (indexed from 0 to 25), initially your finger is 
// at index 0. To type a character, you have to move your finger to the index of the desired character. The time taken to move 
// your finger from index i to index j is |i - j|.
// 
// You want to type a string word. Write a function to calculate how much time it takes to type it with one finger.

#include <bits/stdc++.h>

using namespace std;

int singleRowKeyboard(string& str)
{
    int traversal;
    int cost = 0;
    for(int i=0; i<str.length(); i++)
    {
        if(i==0)
        {
            traversal = (str.at(i) - 'a');
        }
        else
        {
            traversal = (str.at(i) - str.at(i-1));
            if(traversal < 0)
            {
                traversal *= -1;
            }
        }
        cost += traversal;
    }
    return cost;
}

int main()
{
    string str;
    cin>>str;

    cout<<singleRowKeyboard(str)<<endl;

    return 0;
}