/**
 * @file Exercises6.c
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

float resolve(int n);

int main() {
    int n; // nhận giá trị input n
    puts("Nhập số nguyên n: ");
    scanf("%d", &n);
    // chia truong hop
    if(n <= 0) {
        puts("ERROR");
    } else {
        float result = resolve(n);
        printf("%1.3f\n", result);
    }
}

float resolve(int n) {
    if(n == 1) {
        return n;
    } else {
        return (float)1 / n + resolve(n - 1);
    }
}
