// For each integer n in the inclusive interval [a, b]:

// If 1<=n<=9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
// Else if n>9 and it is an even number, then print "even".
// Else if n>9 and it is an odd number, then print "odd".

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int n1,n2;
    cin>>n1>>n2;
    for(int d=n1; d<=n2; d++)
    {
        if(d==1)
            cout<<"one"<<endl;
        else if(d==2)
            cout<<"two"<<endl;
        else if(d==3)
            cout<<"three"<<endl;
        else if(d==4)
            cout<<"four"<<endl;
        else if(d==5)
            cout<<"five"<<endl;
        else if(d==6)
            cout<<"six"<<endl;
        else if(d==7)
            cout<<"seven"<<endl;
        else if(d==8)
            cout<<"eight"<<endl;
        else if(d==9)
            cout<<"nine"<<endl;
        else if(d>9)
            if(d%2==0)
                cout<<"even"<<endl;
            else
                cout<<"odd"<<endl;

    }

    return 0;
}