// Program for understanding pre and post increment

#include <iostream>

using namespace std;

int main()
{
    int a=10;
    int b;
    b=a++;
    // a = 11
    // b = 10
    cout<<a<<" "<<b<<endl<<endl;

    int c=10;
    int d;
    d=++c;
    // c = 11
    // d = 11
    cout<<c<<" "<<d<<endl<<endl;

    int i=1;
    i = i++ + ++i; 
    // i = 1 + 3
    cout<<i<<endl<<endl;

    int p=1;
    int q=2;
    int k;
    k = p + q + p++ + q++ + ++p + ++q; 
    // k = 1 + 2 + 1 + 2 + 3 + 4
    // p = 3
    // q = 4
    cout<<k<<endl<<endl;

    int t=0;
    t = t++ - --t + ++t - t--; 
    // t = 0 - 0 + 1 - 1
    cout<<t<<endl<<endl;

    int x=1, y=2, z=3;
    int l = x-- - y-- - z--;
    // q = 1 - 2 - 3
    // x = 0
    // y = 1
    // z = 2
    cout<<l<<endl<<endl;

    int g=10, h=20, j;
    j = g-- - g++ + --h - ++h + --g - h-- + ++g - h--;
    // j = 10 - 9 + 19 -20 + 9 - 20 + 10 - 19
    // g = 10
    // h = 20
    cout<<j<<endl;
    
    return 0;
}