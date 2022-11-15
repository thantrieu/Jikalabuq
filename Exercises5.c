
/**
 * @file Exercises5.c
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

int sumDigits(long long n);

int main() {
    long long n;
    puts("Nhập số nguyên n: ");
    scanf("%lld", &n);
    if(n < 0) {
        n = -n;
    }
    int result = sumDigits(n);
    printf("%d\n", result);
    
    return 0;
}

int sumDigits(long long n) {
    if(n < 10) {
        return (int)n;
    } else {
        return n % 10 + sumDigits(n / 10);
    }
}
