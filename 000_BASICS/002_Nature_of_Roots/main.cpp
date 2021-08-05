#include <iostream>

using namespace std;

string natureOfRoots(double a, double b, double c)
{
    double d = ((b*b)-(4*a*c));
    if(d>0)
    {
        return "Real and Unequal";
    }
    else if(d==0)
    {
        return "Real and Equal";
    }
    else
    {
        return "Imaginary";
    }
}

int main()
{
    double a, b, c;
    cin>>a>>b>>c;

    cout<<"The nature of roots is : "<<natureOfRoots(a, b, c)<<endl;
}