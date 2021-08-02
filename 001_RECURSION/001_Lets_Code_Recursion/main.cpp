#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// Head Recursion
void funHead(int n) {
    if (n>0) {
        cout<<n<<endl;
        funHead(n-1);
    }
}

// Tail Recursion
void funTail(int n) {
    if (n>0) {
        funTail(n-1);
        cout<<n<<endl;
    }
}

int main()
{
    int x = 3;
    funHead(x);
    // Head Recursion
    cout<<endl<<endl;
    funTail(x);
    // Tail Recursion
    return 0;
}