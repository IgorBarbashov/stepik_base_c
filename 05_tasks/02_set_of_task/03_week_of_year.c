// Идёт k день года. Определить номер текущей недели в году. Предполагаем, что 1 января выпало на пятницу.
// Входные данные:
// Целое число k, 1 <= k <= 365
// Выходные данные:
// Одно целое число -- номер недели.

#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    printf("%d", x / 7 + (x % 7 > 3 ? 2 : 1));
    return 0;
}