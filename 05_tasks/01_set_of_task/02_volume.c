// Составить программу вычисления объема цилиндра и конуса, которые имеют одинаковую высоту hh и одинаковый радиус основания rr.
// Входные данные:
// Два натуральных числа. Первое rr -- радиус основания в см, второе hh -- высота в сантиметрах.
// Выходные данные:
// Два вещественных числа, имеющих два знака после запятой. Первое число -- объём цилиндра с высотой hh и радиусом основания rr. Второе число -- объём конуса с высотой hh и радиусом основания rr.
// Sample Input:
// 11 29
// Sample Output:
// 11023.85 3674.62

#include <stdio.h>

#define pi 3.14159265358979323846

int main() {
  int r, h;
  scanf("%d%d", &r, &h);
  double vC = h * pi * r * r;
  printf("%.2lf %.2lf", vC, vC / 3);
  return 0;
}