// Даны натуральные числа M и N. Вывести младшую цифру целой части и старшую цифру дробной части числа M / N.
// Входные данные:
// Два натуральных числа MM и NN, записанных через пробел.
// Выходные данные:
// Два целых числа.  Первое младшая цифра целой части числа M / N, второе -- старшая цифра дробной части числа M / N.
// Sample Input 1:
// 1554 155
// Sample Output 1:
// 0 0
// Sample Input 2:
// 1234 473
// Sample Output 2:
// 2 6

#include <stdio.h>

int main() {
  int m, n;
  scanf("%d%d", &m, &n);
  int x = (m / n) % 10;
  int y = (int)(((double)m / n - m/n) * 10);
  printf("%d %d", x, y);
  return 0;
}