// Вычислить номер дня в невисокосном году по заданным числу и месяцу.
// Входные данные:
// Два целых числа. Первое число m -- номер месяца. 1 <= m <= 12
// Второе число d -- номер дня в месяце. 1 <= d <= 31
// Выходные данные:
// Одно целое число -- порядковый номер дня в невисокосном году.
// Sample Input 1:
// 2 4
// Sample Output 1:
// 35
// Sample Input 2:
// 6 12
// Sample Output 2:
// 163

#include <stdio.h>

int main() {
    int offset[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
    int m, d;
    scanf("%d %d", &m, &d);
    printf("%d", offset[m - 1] + d);
    return 0;
}
