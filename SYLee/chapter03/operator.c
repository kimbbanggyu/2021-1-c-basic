#include <stdio.h>
#include <string.h>

const char* int2binary(int i);

int main(void) {
  int a = 0b00001101;
  int b = 0b11010101;

  printf("a : %s\n", int2binary(a));
  printf("b : %s\n", int2binary(b));

  printf("a | b : %s\n", int2binary(a | b));
  printf("a & b : %s\n", int2binary(a & b));
  printf("a ^ b : %s\n", int2binary(a ^ b));
  printf("a << 3 : %s\n", int2binary(a << 3));
  printf("b >> 2 : %s\n", int2binary(b >> 2));
  return 0;
}

const char* int2binary(int i) {
  static char c[9];
  c[0] = '\0';

  for (int z = 128; z >0; z >>= 1) {
    strcat(c, ((i & z) == z) ? "1" : "0");
  }
  return c;
}
