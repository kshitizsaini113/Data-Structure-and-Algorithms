#include <iostream>

using namespace std;

int main()
{
    int row, column;
    cin >> row >> column;

    for (int r=0; r<row; r++)
    {
        for (int c=0; c<column; c++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}