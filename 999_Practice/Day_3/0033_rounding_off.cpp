// Program for 

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x, y, z;
	x=1.13;
	y=1.50;
	z=1.71;

	double a, b, c;
	a=-1.31;
	b=-1.50;
	c=-1.71;

	cout<<floor(x)<<" "<<floor(y)<<" "<<floor(x)<<endl;
	cout<<floor(a)<<" "<<floor(b)<<" "<<floor(c)<<endl;
	cout<<endl;

	cout<<ceil(x)<<" "<<ceil(y)<<" "<<ceil(z)<<endl;
	cout<<ceil(a)<<" "<<ceil(b)<<" "<<ceil(c)<<endl;
	cout<<endl;

	cout<<trunc(x)<<" "<<trunc(y)<<" "<<trunc(z)<<endl;
	cout<<trunc(a)<<" "<<trunc(b)<<" "<<trunc(c)<<endl;
	cout<<endl;

	cout<<round(x)<<" "<<round(y)<<" "<<round(z)<<endl;
	cout<<round(a)<<" "<<round(b)<<" "<<round(c)<<endl;
	cout<<endl;

    return 0;
}
