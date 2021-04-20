#include <stdio.h>

int main(void) {
    int choice;

    printf("1. 전체 보기\n");
    printf("2. 추가하기\n");
    printf("3. 제거하기\n");
    printf("4. 검색하기\n");
    printf("5. 종료\n");

    printf("메뉴를 선택하세요: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("전체 목록을 출력합니다.\n");
            break;
        case 2:
            printf("데이터를 추가합니다.\n");
            break;
        case 3:
            printf("데이터를 제거합니다.\n");
            break;
        case 4:
            printf("데이터를 검색합니다.\n");
            break;
        case 5:
            printf("시스템을 종료합니다.\n");
            break;
        default:
            printf("잘못된 메뉴를 선택했습니다.\n");
    }
}