// Program for understanding pointer to pointer

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 13;
    int *p;
    p = &a;

    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<endl;

    int **q = &p;

    cout<<q<<endl;
    cout<<*q<<endl;
    cout<<**q<<endl;

    return 0;
}