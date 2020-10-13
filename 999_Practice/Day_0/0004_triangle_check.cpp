// Program for checking if a triangle is equiletral, isoscalene or scalance

#include <iostream>

using namespace std;

int main()
{
    int s1, s2, s3;
    cin>>s1>>s2>>s3;

    if(s1==s2 && s2==s3)
    {
        cout<<"Equiletral";
    }
    else if (s1==s2 || s2==s3 || s1==s3)
    {
        cout<<"Isoscalane";
    }
    else
    {
        cout<<"Scalane";
    }
    
    
    
    
    return 0;
}