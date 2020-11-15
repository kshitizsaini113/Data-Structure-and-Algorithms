// Program for updating a specific bit.

#include <bits/stdc++.h>

using namespace std;

int clearBit(int n, int pos)
{
    int mask = ~(1<<pos);
    return (n & mask);
}

int setBit(int n, int pos, int value)
{
    return (n | (value<<pos));
}

int updateBit(int n, int pos, int value)
{
    return (setBit(clearBit(n, pos), pos, value));
}

int main()
{
    cout<<updateBit(5, 1, 1)<<endl;

    return 0;
}