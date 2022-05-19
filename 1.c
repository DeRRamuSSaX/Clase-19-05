#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int i = atoi(argv[2]);
  int f = atoi(argv[3]);
  if (n == i && i == f) {
    printf("Iguales\n");
  } else printf("No Iguales\n");
  return 0;
}
