#include <iostream>

using namespace std;

void printRectangle(int row, int column)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main()
{
    int row, column;
    cin>>row>>column;

    printRectangle(row, column);
    
    return 0;
}