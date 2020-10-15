// Program for understanding large I/O Error faced in compititive programming

#include <iostream>

using namespace std;

int main()
{
    // Sometimes in competitive programming we face issues when input is large
    // and the speed of input becomes a bottleneck
    // i.e. Problem of Large I/O Data.

    // One of the difference between scanf and cin is that we supply the datatype
    // to scanf explicitly while cin uses operator overloading to perform the same.

    // Another reason is that iostream makes use of stdio's buffering system.
    // cin wastes the time synchronizing with underlying C library.

    // To make out I/O faster we need to remove the sync with using libstdc++
    std::ios::sync_with_stdio(false);
    // Now cin becomes 8-10% faster than scanf because scanf interprets the format 
    // argument at runtime while cin does it at compile time.

    // If done so cin and scanf cant be used together in the same program.

    int n;
    cin>>n;
    cout<<n;

    return 0;
}
