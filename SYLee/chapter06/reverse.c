#include <stdio.h>
#include <string.h>

int main(void) {
  char str[100];
  printf("입력: ");
  scanf("%[^\n]s", str);
  printf("출력: ");
  int len = strlen(str);
  for ( ; len >= 0; len--){
    printf("%c", str[len]);
  }
  return 0;
}
