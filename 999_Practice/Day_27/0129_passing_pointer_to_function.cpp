// Program for understanding pointer to a function.

#include <bits/stdc++.h>

using namespace std;

void swap_by_value(int a, int b)
{
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
}

void swap_by_refrence(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *b ^ *a;
    *a = *a ^ *b;
}

int main()
{
    int a = 2;
    int b = 4;

    swap_by_value(a, b);
    cout<<a<<"  "<<b<<endl;

    int *aptr = &a;
    int *bptr = &b;

    swap_by_refrence(aptr, bptr);
    cout<<a<<"  "<<b<<endl;

    swap_by_refrence(&a, &b);
    cout<<a<<"  "<<b<<endl;

    return 0;
}