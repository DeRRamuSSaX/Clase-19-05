//Escribir un programa que acepte dos argumentos n y m. El tamano de un array es el argumento n.
//El programa llena el array con numeros aleatorios entre 0 y m y los imprime uno por lınea.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int m = atoi(argv[2]);
  int tamaño[n];
  for (int i = 0; i < n; i++) {
    int r = (rand() % m) + 1;
    tamaño[n] = r;
    printf("%d\n", tamaño[n]);
  }
  printf("\n");
  return 0;
}
