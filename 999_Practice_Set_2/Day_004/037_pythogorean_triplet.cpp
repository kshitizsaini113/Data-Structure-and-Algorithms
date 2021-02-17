#include <iostream>

using namespace std;

bool calculatePythogorean(int s1, int s2, int s3)
{
    return (s1*s1 == s2*s2 + s3*s3);
}

bool checkPythogorean(int side1, int side2, int side3)
{
    int max_side = max(side1, max(side2, side3));

    bool isPythogorean = false;

    if(max_side == side1)
    {
        isPythogorean = calculatePythogorean(side1, side2, side3);
    }
    else if(max_side == side2)
    {
        isPythogorean = calculatePythogorean(side2, side3, side1);
    }
    else
    {
        isPythogorean = calculatePythogorean(side3, side1, side2);
    }

    return isPythogorean;
}

int main()
{
    int side1, side2, side3;
    cin>>side1>>side2>>side3;

    if(checkPythogorean(side1, side2, side3))
    {
        cout<<"Following sides form a pythogorean triplet"<<endl;
    }
    else
    {
        cout<<"Sides don't form a pythogorean triplet"<<endl;
    }

    return 0;
}