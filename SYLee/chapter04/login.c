#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ID "user01"
#define PW "1234"

int main(void) {
  char* id = (char*)malloc(sizeof(char) * 10);
  printf("ID: ");
  scanf("%s", id);

  if (strcmp(id, ID) == 0) {
    char* pw = (char*)malloc(sizeof(char) * 10);
    printf("PW: ");
    scanf("%s", pw);
    if (strcmp(pw, PW) == 0) {
      printf("Successfully logged in\n");
    } else {
      printf("Wrong Password\n");
    }
    free(pw);
  } else {
    printf("Wrong ID\n");
  }
  free(id);

  return 0;
}