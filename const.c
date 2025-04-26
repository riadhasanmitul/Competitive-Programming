#include <stdio.h>

int main() {
    const int x = 10;
    int *ptr = (int *)&x;
    *ptr = 20;
    printf("%d\n", x);
    return 0;
}
