#include <iostream>

using namespace std;

bool pythogorean(int max, int n1, int n2)
{
    if(max*max = n1*n1 + n2*n2)
    {
        return true;
    }
    return false;
}

bool checkPythogoreanTriplet(int n1, int n2, int n3)
{
    bool result;

    if(n1>n2 && n1>n3)
    {
        result = pythogorean(n1, n2, n3);
    }
    else if(n2>n3)
    {
        result = pythogorean(n2, n1, n3);
    }
    else
    {
        result = pythogorean(n3, n1, n2);
    }

    return result;
}

int main()
{
    int n1, n2, n3;
    cin>>n1>>n2>>n3;

    bool result = checkPythogoreanTriplet(n1, n2, n3);

    if(result)
    {
        cout<<"The triplet is pythogorean"<<endl;
    }
    else
    {
        cout<<"The triplet is not pythogorean"<<endl;
    }

    return 0;
}