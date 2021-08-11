#include <iostream>

using namespace std;

void print01Triangle(int height)
{
    bool zero;
    for(int i=1; i<=height; i++)
    {
        if(i%2==0)
        {
            zero = true;
        }
        else
        {
            zero = false;
        }

        for(int j=0; j<i; j++)
        {
            if(zero)
            {
                cout<<"0 ";
                zero = false;
            }
            else
            {
                cout<<"1 ";
                zero = true;
            }
        }
        cout<<endl;
    }
}

int main()
{
    int height;
    cin>>height;

    print01Triangle(height);

    return 0;
}