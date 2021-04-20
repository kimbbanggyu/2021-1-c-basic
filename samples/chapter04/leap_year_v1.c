#include <stdio.h>

int main(void) {
    int year;
    printf("연도 입력: ");
    scanf("%d", &year);

    int isLeap;
    if (year % 400 == 0) {
        isLeap = 1;
    } else if (year % 100 == 0) {
        isLeap = 0;
    } else if (year % 4 == 0) {
        isLeap = 1;
    } else {
        isLeap = 0;
    }

    if (isLeap) {
        printf("%d년은 윤년입니다.\n", year);
    } else {
        printf("%d년은 평년입니다.\n", year);
    }

    return 0;
}
