// Дано натуральное число N. Найти наименьшее натуральное число r, такое, что 2^r >= N.
// Входные данные:
// Одно натуральное число N.
// Выходные данные:
// Число r.
// Sample Input 1:
// 128
// Sample Output 1:
// 7
// Sample Input 2:
// 1
// Sample Output 2:
// 1
// Sample Input 3:
// 7
// Sample Output 3:
// 3

#include <stdio.h>

int main() {
    int n, r = 1;
    scanf("%d", &n);
    
    while(1 << r < n) {
        r++;
    }
    
    printf("%d", r);
    return 0;
}