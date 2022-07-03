// В книгах о Шерлоке Холмсе используются единицы измерения английской системы мер (а именно английские футы и дюймы).
// Из-за этого непонятно, кто высокий, а кто не очень. Напишите программу, переводящую футы и дюймы в метры и сантиметры.
// Входные данные:
// Два натуральных числа. Первое, F, количество футов, второе, D, количество дюймов.
// Выходные данные:
// Строка, содеражащая вещественное число, равное количеству метров в F футах и D дюймах. Формат числа: два знака после запятой.
// Пример строки вывода приведён в тестовых данных ниже.
// Подсказки:
// 1 дюйм = 25.4 мм;
// 1 фут = 12 дюймов;
// Обратите внимание на формат вывода.
// Sample Input:
// 6 2
// Sample Output:
// 6'2" = 1.88m.

#include <stdio.h>

int main() {
    int f, d;
    scanf("%d%d", &f, &d);
    printf("%d'%d\" = %.2lfm.", f, d, (f * 12 + d) * 25.4 / 1000 );
    return 0;
}