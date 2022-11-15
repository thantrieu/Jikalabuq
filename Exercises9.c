/**
 * @file Exercises9.c
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

void findMaxDigit(long long n, int* max) {
    int digit = n % 10;
    *max = digit > *max ? digit : *max;
    if(n < 10) {
        return;
    } else {
        findMaxDigit(n / 10, max);
    }
}

int main() {
    long long n;
    puts("Nhập số nguyên n: ");
    scanf("%lld", &n);
    if(n < 0) {
        n = -n;
    }
    int max = n % 10;
    findMaxDigit(n / 10, &max);
    printf("%d\n", max);
    
    return 0;
}
