// Определить является ли натуральное число чётным или нечётным.
// Входные данные:
// Одно натуральное число k. 0 <= k <= 100
// Выходные данные:
// Число 1, если k -- чётное и -1, если k -- нечётное.
// Подсказки:
// Используйте остаток от деления на 2
// Sample Input 1:
// 91
// Sample Output 1:
// -1
// Sample Input 2:
// 0
// Sample Output 2:
// 1

#include <stdio.h>

int main() {
  int x;
  scanf("%d", &x);
  printf("%d", x % 2 == 0 ? 1 : -1);
  return 0;
}