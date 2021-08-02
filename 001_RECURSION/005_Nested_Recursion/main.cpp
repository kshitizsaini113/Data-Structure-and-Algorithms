#include <iostream>

using namespace std;

int fun(int n) {
    if(n>100) {
        return n-10;
    }
    else {
        cout<<"fun(fun(" << n+11 << ")) -> ";
        return fun(fun(n+11));
    }
}

int main() {
    cout<<"fun(95) -> ";
    cout<<fun(95);
    return 0;
}
