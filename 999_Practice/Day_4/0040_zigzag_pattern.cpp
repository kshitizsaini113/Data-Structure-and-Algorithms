// Program for printing zig-zag pattern

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
	cin>>n;
    
    for(int i=1;i<=3;i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==1)
            {
                if((j+1)%4==0)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            if(i==2)
            {
                if(j%2==0)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            if(i==3)
            {
                if((j-1)%4==0)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }

    return 0;
}
