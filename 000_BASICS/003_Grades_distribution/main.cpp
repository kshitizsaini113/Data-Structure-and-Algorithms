#include <iostream>

using namespace std;

char grades(int marks)
{
    if(marks<0 || marks>100)
    {
        return '1';
    }
    else if(marks>90)
    {
        return 'A';
    }
    else if(marks>80)
    {
        return 'B';
    }
    else if(marks>70)
    {
        return 'C';
    }
    else if(marks>60)
    {
        return 'D';
    }
    else if(marks>35)
    {
        return 'E';
    }
    else
    {
        return 'F';
    }
}

int main()
{
    int marks;
    cin>>marks;

    char grade = grades(marks);

    if(grade>='A' && grade<='F')
    {
        cout<<"Grade is : "<<grade<<endl;
    }
    else
    {
        cout<<"Invalid Marks entered"<<endl;
    }

    return 0;
}   