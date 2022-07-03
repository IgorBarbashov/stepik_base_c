#include <stdio.h>
#include <math.h>

int main() {
  double po = 1.29;
  double z = 1.25e-4;
  int h;
  scanf("%d", &h);
    
  printf("%.2lf", po * exp(-1 * h * z));
  return 0;
}