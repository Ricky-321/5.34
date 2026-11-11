#include <stdio.h>

int power(int base, int exponent);

int main() {
    int a, b;
    printf("輸入底數和次方");
    scanf("%d%d", &a, &b);
    int result = power(a, b);
    printf("%d的%d次方為%d", a, b, result);
    return 0;
}
int power(int base, int exponent) {
    if (exponent == 1)
        return base;
    else
        return base * power(base, exponent - 1);
}