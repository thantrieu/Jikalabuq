/**
 * @file Exercises4.c
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

long gcd(long a, long b);

int main() {
    long a;
    long b;
    puts("Nhập hai số nguyên a, b");
    scanf("%ld%ld", &a, &b);
    if((a >= 0 && b > 0) || (a > 0 && b >= 0)) {
        long result = gcd(a, b);
        printf("%ld\n", result);
    } else {
        puts("ERROR");
    }
}

long gcd(long a, long b) {
    if(a == 0) {
        return b;
    }
    if(b == 0) {
        return a;
    }
    if(a == b) {
        return a;
    } else if(a > b) {
        return gcd(a - b, b);
    } else {
        return gcd(a, b - a);
    }
}
