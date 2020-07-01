#include <stdio.h>

int fun(int n) {
    if(n>100) {
        return n-10;
    }
    else {
        printf("fun(fun(%d)) -> ", n+11);
        return fun(fun(n+11));
    }
}

int main() {
    printf("fun(95) -> ");
    printf("%d", fun(95));
    return 0;
}
