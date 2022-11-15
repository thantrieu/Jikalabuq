/**
 * @file Exercises10.c
 * @author Branium Academy
 * @see https://braniumacademy.net
 * @brief 
 * @version 2.0
 * @date 2022-11-15
 * 
 * @copyright Copyright (c) Branium Academy 2022
 * 
 */

#include <stdio.h>

void findMinDigit(long long n, int* min);

int main() {
    long long n;
    puts("Nhập số nguyên n: ");
    scanf("%lld", &n);
    if(n < 0) {
        n = -n;
    }
    int min = n % 10;
    if(n > 10) {
        findMinDigit(n / 10, &min);
    }
    printf("%d\n", min);
    
    return 0;
}

void findMinDigit(long long n, int* min) {
    int digit = n % 10;
    *min = digit < *min ? digit : *min;
    if(n < 10) {
        return;
    } else {
        findMinDigit(n / 10, min);
    }
}
