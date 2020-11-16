// Program for counting the number of 1 present in a number's binary.

#include <bits/stdc++.h>

using namespace std;

int numberOfOnes(int n)
{
    int count = 0;
    while(n)
    {
        n = n & n-1;
        count++;
    }
    return count;
}

int main()
{
    cout<<numberOfOnes(19)<<endl;
    cout<<numberOfOnes(13)<<endl;

    return 0;
}