#include <stdio.h>

// Head Recursion
void funHead(int n) {
    if (n>0) {
        printf("%d ", n);
        funHead(n-1);
    }
}

// Tail Recursion
void funTail(int n) {
    if (n>0) {
        funTail(n-1);
        printf("%d ", n);
    }
}

int main() {
    int x = 3;
    funHead(x);
    // Head Recursion
    printf("\n\n");
    funTail(x);
    // Tail Recursion
    return 0;
}
