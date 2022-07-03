// Теперь разберёмся с измерениями массы. Напишите программу для перевода фунтов в килограммы
// Входные данные:
// Одно целое число M -- масса в фунтах.
// Выходные данные:
// Одно вещественное число -- количество килограмм в M фунтах. Два знака после запятой.
// Подсказки:
// 11 фунт = 454 грамм
// Sample Input:
// 124
// Sample Output:
// 56.30

#include <stdio.h>

int main() {
  int m;
  scanf("%d", &m);
  printf("%.2lf", m * .454);
  return 0;
}