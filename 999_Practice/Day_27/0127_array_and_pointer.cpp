// Program for understanding arrays and pointers.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {10, 20, 30};
    cout<<*arr<<endl<<endl;
    // *arr is a constant pointer and its value cant be modified.

    int *ptr = arr;
    for(int i=0; i<3; i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }

    cout<<endl;
    for(int i=0; i<3; i++)
    {
        cout<<*(arr+i)<<endl;
    }

    return 0;
}