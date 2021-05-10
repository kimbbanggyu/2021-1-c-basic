#include <stdio.h>

int main(void) {
  int n;
  int result = 1;
  scanf("%d", &n);
  for (int i = 2; i <= n; i++) {
    result *= i;
  }
  printf("%d! = %d\n", n, result);
  return 0;
}
