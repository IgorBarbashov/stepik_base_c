#include <stdio.h>
#include <stdlib.h>

int main() {
  int x, y;
  
  srand(time(NULL)); // ?

  scanf("%d %d", &x, &y);
  printf("%d", x + rand()%(y - x + 1));
  return 0;
}