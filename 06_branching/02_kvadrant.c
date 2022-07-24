// Квадранты.
// На координатной плоскости задана точка A(x,y). Необходимо указать квадрант, в котором она расположена.
// Входные данные:
// Два вещественных числа x, y, которые не равны нулю.
// Выходные данные:
// Вывести одно целое - номер квадранта.
// Sample Input:
// 2 -4
// Sample Output:
// 4

#include <stdio.h>

int main() {
  double x, y;
  scanf("%lf %lf", &x, &y);

  switch((int)x > 0) {
      case 1:
          switch((int)y > 0) {
              case 1:
                  printf("1");
                  break;
              case 0:
                  printf("4");
                  break;
          }
          break;
      case 0:
          switch((int)y > 0) {
              case 1:
                  printf("2");
                  break;
              case 0:
                  printf("3");
                  break;
          }
  }

  return 0;
}