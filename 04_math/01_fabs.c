#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", (int)fabs(x-y));
    return 0;
}