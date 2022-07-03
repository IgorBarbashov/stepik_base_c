// Идёт kk секунда суток. Определить, сколько целых часов и целых минут будут показывать электронные часы, если на 0-ой секунде они показывают 0:00.
// Sample Input:
// 34961
// Sample Output:
// 9 42

#include <stdio.h>

int main() {
  int k;
  scanf("%d", &k);
  int h = k / 3600;
  int m = (k - h * 3600) / 60;
  printf("%d %d", h, m);
  return 0;
}