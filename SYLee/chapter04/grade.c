#include <stdio.h>

int main(void) {
  int input;

  printf("input your score: ");
  scanf("%d", &input);

  if(input >= 95) {
    printf("Your letter grade is A+.\n");
  } else if(input < 95 && input >= 90) {
    printf("Your letter grade is A\n");
  } else if(input < 90 && input >= 85) {
    printf("Your letter grade is B+\n");
  } else if(input < 85 && input >= 80) {
    printf("Your letter grade is B\n");
  } else if(input < 80 && input >= 75) {
    printf("Your letter grade is C+\n");
  } else if(input < 75 && input >= 70) {
    printf("Your letter grade is C\n");
  } else if(input < 70 && input >= 65) {
    printf("Your letter grade is D+\n");
  } else if(input < 65 && input >= 60) {
    printf("Your letter grade is D\n");
  } else {
    printf("Your letter grade is F\n");
  }

  return 0;
}
