#include <iostream>

using namespace std;

void printHollowRectangle(int row, int column)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            if(i==0 || j==0 || i==row-1 || j==column-1)
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
}

int main()
{
    int row, column;
    cin>>row>>column;

    printHollowRectangle(row, column);
    
    return 0;
}