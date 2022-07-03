// Как известно планета Сатурн имеет систему концентрических колец, состоящих из льда и пыли. Впервые их обнаружил ещё Галилео Галилей. Кольца разделены между собой щелями, иногда довольно большими. Напишите программу, которая по известным значениям внутреннего и внешнего радиусов кольца вычисляет его ширину и площадь.
// Входные данные:
// Два натуральных числа. Первое r_ir 
// i -- внутренний радиус кольца в километрах, второе r_or 
// o -- внешний радиус кольца в километрах.
// Выходные данные:
// Два числа.   Первое число -- ширина кольца в километрах (целое число). Второе число  площадь кольца в гектарах. Формат: два знака после запятой.
// Sample Input:
// 122200 136800
// Sample Output:
// 14600 1187961846028.44

#include <stdio.h>

#define pi 3.14159265358979323846

int main() {
  int ri, ro;
  scanf("%d%d", &ri, &ro);
  int rd = ro - ri;
  double s = pi * ((double)ro * ro - (double)ri * ri) * 100;
  printf("%d %.2lf", rd, s);
  return 0;
}