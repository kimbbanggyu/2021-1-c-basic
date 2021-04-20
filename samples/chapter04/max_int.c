#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("첫 번째 정수: ");
    scanf("%d", &a);
    printf("두 번째 정수: ");
    scanf("%d", &b);
    printf("세 번째 정수: ");
    scanf("%d", &c);

    int max;
    if (a > b) {
        if (a > c) {
            max = a;
        } else {
            max = c;
        }
    } else {
        if (b > c) {
            max = b;
        } else {
            max = c;
        }
    }

    printf("최대값은 %d입니다.\n", max);
}
