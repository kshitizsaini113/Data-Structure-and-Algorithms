#include <stdio.h>

int y = 0;

int funStatic(int n) {
    static int x = 0;
    if (n>0) {
        x++;
        return funStatic(n-1) + x;
    }
    return 0;
}

int funGlobal(int n) {
    if (n>0) {
        y++;
        return funGlobal(n-1) + y;
    }
}

int main() {
    printf("%d",funStatic(5));
    printf("\n\n");
    printf("%d",funStatic(5));
    printf("\n\n");
    printf("%d",funGlobal(5));
    printf("\n\n");
    printf("%d",funGlobal(5));
    return 0;
}
