#include <iostream>

using namespace std;

void towerOfHanoi(int n, char a, char b, char c)
{
    if(n > 0)
    {
        towerOfHanoi(n-1, a, c, b);
        cout<<"Move disk from "<<a<<" to "<<c<<endl;
        towerOfHanoi(n-1, b, a, c);
    }
    else
    {
        return;
    }
}

int main()
{
    int n;
    char a = 'A';
    char b = 'B';
    char c = 'C';

    cin>>n;

    towerOfHanoi(n, a, b, c);
}