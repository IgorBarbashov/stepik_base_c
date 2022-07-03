// Дана длина ребра куба. Необходимо найти площадь одной грани, площадь полной поверхности и объем этого куба.
// Входные данные:
// xx - длина ребра куба, целое число.
// Выходные данные:
// Три числа, записанные через пробел. Первое -- площадь грани куба, второе -- площадь полной поверхности куба, третье число -- объем куба.
// Sample Input:
// 2
// Sample Output:
// 4 24 8

#include <stdio.h>

int main() {
  int x;
  scanf("%d", &x);
  printf("%d %d %d", x*x, x*x*6, x*x*x);
  return 0;
}