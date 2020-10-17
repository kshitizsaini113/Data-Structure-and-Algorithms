// Program for printing palindromic pattern

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
	cin>>n;
    int count=1;


	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(j>i)
			{
				cout<<"  ";

			}
		}
        for(int d=count; d>=1; d--)
        {
            cout<<d<<" ";
        }
        for(int d=2;d<=count;d++)
        {
            cout<<d<<" ";
        }
        count++;
		cout<<endl;
	}

    return 0;
}
