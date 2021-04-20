#include <stdio.h>

int main(void) {
    int year;
    printf("연도 입력: ");
    scanf("%d", &year);

    int isLeap = 0; // 아예 기본값을 평년으로.
    if ((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0))) {
        isLeap = 1;
    }

    if (isLeap) {
        printf("%d년은 윤년입니다.\n", year);
    } else {
        printf("%d년은 평년입니다.\n", year);
    }

    return 0;
}
