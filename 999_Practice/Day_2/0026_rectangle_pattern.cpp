// Program for printing rectangle pattern

#include <iostream>

using namespace std;

int main()
{
    int row, col;
    cin>>row>>col;

    for(int d=1; d<=row; d++)
    {
        for(int b=1; b<=col; b++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
