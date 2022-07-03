// В современном обществе существует путаница при использовании слов килобайт, мегабайт и т.д.
// В некоторых случаях под килобайтом понимается 10^3 байт, а в других 2^10 байт.
// Согласно Википедии для USB-флешек используются десятичные приставки (степени 10).
// Напишите программу, которая вычисляет на сколько байт коммерсанты обманывают потребителя при покупке им USB-флешки на KK - гигабайт.
// Входные данные:
// Одно натуральное число: K
// Выходные данные:
// Одно число, равное разности между количеством байт в КК двоичных гигабайтах и KK десятичных гигабайтах.
// Sample Input 1:
// 2
// Sample Output 1:
// 147483648
// Sample Input 2:
// 30
// Sample Output 2:
// 2212254720

#include <stdio.h>
#include <math.h>

int main() {
    int k;
    scanf("%d", &k);
    long int b2 = k * pow(2, 30);
    long int b10 = k * pow(10, 9);
    printf("%ld", b2 - b10);
    return 0;
}