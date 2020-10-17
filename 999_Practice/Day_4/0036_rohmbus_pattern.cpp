// Program for printing rohmbus pattern

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
	cin>>n;
    int d;

	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(j>i)
			{
				cout<<"  ";

			}
		}
        for(int j=1; j<=n; j++)
        {
            cout<<"* ";
        }
		cout<<endl;
	}

    return 0;
}
