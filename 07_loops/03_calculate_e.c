// Вычислить число e = 1 + 1/1! + 1/2! + 1/3! + 1/4! + ... с точностью ep.
// Входные данные:
// Вещественное число ep, (10^-9 <= ep <= 10^-1).
// Выходные данные:
// Значение числа e с точностью ep (8 знаков после запятой). Считать, что достигнута точность ep, если очередной член последовательности меньше ep, т.е.
// 1/k! <= ep.
// Sample Input 1:
// 0.1
// Sample Output 1:
// 2.70833333
// Sample Input 2:
// 0.000001
// Sample Output 2:
// 2.71828180

#include <stdio.h>

int main() {
    double e = 2, k, ep;
    int i = 2, f = 2;
    scanf("%lf", &ep);
    
    do {
        k = 1.0 / f;
        e += k;
        i++;
        f *= i;
    } while(k >= ep);
    
    printf("%.8lf", e);
    return 0;
}

// int main() {
//     double er, e = 1.0, k = 1.0;
//     int i = 1;
//     scanf("%lf", &er);
//     while(1/k > er) k *= i++, e += 1/k;
//     printf("%.8lf",e);
//     return 0;
// }