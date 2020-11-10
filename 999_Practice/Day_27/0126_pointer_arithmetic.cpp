// Program for understanding pointer arithmetics

#include <bits/stdc++.h>

using namespace std;

int main()
{
    char ch = 'd';
    char *cptr = &ch;
    cout<<cptr<<endl;

    cptr++;
    cout<<cptr<<endl<<endl;

    int a = 13;
    int *aptr = &a;
    cout<<aptr<<endl;

    aptr++;
    cout<<aptr<<endl<<endl;

    return 0;
}