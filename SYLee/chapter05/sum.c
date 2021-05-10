#include <stdio.h>

int main(void) {
  int total = 0;
  while(1) {
    int i;
    scanf("%d", &i);
    if (i == 0) break;
    total += i;
  }
  printf("Total sum: %d\n", total);
  return 0;
}
