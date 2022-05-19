#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  int a = (rand() % 8) + 1;
  if (a < 6) {
    printf("%d\n", a);
  } else {
    printf("6\n");
  }
  return 0;
}
