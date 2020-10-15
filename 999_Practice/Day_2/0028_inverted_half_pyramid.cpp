// Program for printing an inverted half pyramid pattern

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int d=n; d>0; d--)
    {
        for(int b=d; b>0; b--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
