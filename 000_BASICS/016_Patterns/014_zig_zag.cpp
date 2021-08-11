#include <iostream>

using namespace std;

void zigZag(int length)
{
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=length; j++)
        {
            if((i+j)%4 == 0)
            {
                cout<<"* ";
            }
            else if(i==2 && j%4==0)
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
    int length;
    cin>>length;

    zigZag(length);

    return 0;
}