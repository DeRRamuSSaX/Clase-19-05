#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  if (a == 0) {
    printf("Error\n");
    return 1;
  }
  int disc = -b**2 - 4(a*c);
  if (disc < 0) {
    printf("No en R\n");
    return 1;
  } else (disc == 0) {
    printf("\n");
  }
  return 0;
}
