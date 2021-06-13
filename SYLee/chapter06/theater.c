#include <stdio.h>

#define ROW 4
#define COL 10

enum action {
  RESERVE,
  CANCEL,
};

void SeatInfo(int seat[][COL]);
void Update(int seat[][COL], int action);

int main(void) {

  int seat[ROW][COL] = {0,};
  int running = 1;

  while(running) {
    printf("--- 메뉴 ---\n");
    printf("1. 좌석 출력\n");
    printf("2. 예매하기\n");
    printf("3. 취소하기\n");
    printf("4. 종료하기\n");
    printf("----------\n");
    printf("메뉴 선택: ");
    int input;
    scanf("%d", &input);
    switch(input) {
    case 1:
      SeatInfo(seat);
      break;
    case 2:
    case 3:
      Update(seat, input-2);
      break;
    case 4:
      running = 0;
      break;
    }
  }
  return 0;
}

void SeatInfo(int seat[][COL]){
  for (int i = 0; i< ROW; i++){
    for (int j = 0; j < COL; j++){
      printf("%s", seat[i][j] == 1 ? "■" : "□");
    }
    printf("\n");
  }
}

void Update(int seat[][COL], int action){
  int row, col;
  printf("좌석 입력: ");
  scanf("%d %d", &row, &col);
  row--; col--;
  switch(action){
  case RESERVE:
    if(seat[row][col]) {
      printf("이미 예매된 좌석입니다.\n");
    } else {
      seat[row][col] = 1;
      printf("정상 예매 되었습니다.\n");
    }
    break;
  case CANCEL:
    if(!seat[row][col]) {
      printf("취소할 수 없는 좌석입니다.\n");
    } else {
      seat[row][col] = 0;
      printf("정상 취소되었습니다.\n");
    }
    break;
  }
}
