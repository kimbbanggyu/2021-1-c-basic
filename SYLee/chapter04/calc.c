#include <stdio.h>

int main(void) {
  int a, b;
  char op;
  double result;
  printf("first integer: ");
  scanf("%d", &a);
  printf("second integer: ");
  scanf("%d", &b);
  while (getchar() != '\n' && getchar() != EOF); // remove stdin buffer
  printf("operator(+, -, *, /): ");
  scanf("%c", &op);

  switch(op) {
    case '+':
      result = a + b;
      break;
    case '-':
      result = a - b;
      break;
    case '*':
      result = a * b;
      break;
    case '/':
      if (b == 0) {
        printf("Cannot divide by zero\n");
        return -1;
      } else {
        result = (double) a / b;
      }
      break;
    default:
      printf("Wrong operator is given\n");
      return -1;
  }

  printf("Result: %.3lf\n", result);

  return 0;
}
