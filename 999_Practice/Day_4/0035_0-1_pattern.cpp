// Program for printing 0-1 pattern

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
        if(i%2!=0)
        {
            d=1;
        }
        else
        {
            d=0;
        }
		for(int j=1; j<=n; j++)
		{
			if(i>=j)
			{
				if(d==1)
                {
                    cout<<"1 ";
                    d--;
                }
                else
                {
                    cout<<"0 ";
                    d++;
                }
			}
		}
		cout<<endl;
	}

    return 0;
}
