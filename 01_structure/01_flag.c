#include <stdio.h>

void print_line(char c, int n, int is_eof) {
    for(int i = 0; i < n; i++) {
        printf("%c", c);
    }
    if (is_eof == 1) {
        printf("\n");
    }
}

int main() {
  print_line('_', 49, 1);
   
  for(int i = 0; i < 6; i++) {
    print_line('*', 8, 0);
    print_line('_', 41, 1);
  }

  for(int i = 0; i < 6; i++) {
    print_line('_', 49, 1);
  }

  return 0;
}