#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  if (n < 0) {
    printf("Error\n");
    return 1;
  }
  double area = 0.0
  double b = 3.0/n;
  double x = 0.0;
  while (x < 3.0) {
    double h = -4*(x*x) + 12*x;
    double r = b * h;
    area += r;
    x += b;
  }
  printf("%.2f\n", area);
  return 0;
}
