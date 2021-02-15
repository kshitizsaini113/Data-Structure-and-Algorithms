#include <iostream>

using namespace std;

int main()
{
    int row, column;
    cin >> row >> column;

    for(int r=0; r<row; r++)
    {
        for(int c=0; c<column; c++)
        {
            if( r==0 || c==0 || r==row-1 || c==column-1 )
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}