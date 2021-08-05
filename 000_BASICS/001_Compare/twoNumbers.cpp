#include <iostream>

using namespace std;

int greater(int num1, int num2)
{
    if(num1>num2)
    {
        return 1;
    }
    else if(num2>num1)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num1, num2;
    cin>>num1>>num2;
    
    int result = greater(num1, num2);

    if(result == 1)
    {
        cout<<"num1 is greater"<<endl;
    }
    else if(result == -1)
    {
        cout<<"num2 is greater"<<endl;
    }
    else
    {
        cout<<"Both are equal"<<endl;
    }

    return 0;
}