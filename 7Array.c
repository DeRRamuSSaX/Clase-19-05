//Escribir un programa que genere un array de 100 elementos con valores aleatorios enteros del 0 al 9.
//Contar la cantidad de veces que aparece cada dıgito en el array e imprimir una tabla con las frecuencias.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int m = atoi(argv[2]);
  int valores[n];
  int frecuencia[m];
  for (int i = 0; i < m; i++) {
    frecuencia[i] = 0;
  }
  for (int i = 0; i < n; i++) {
    valores [i]= (rand() % 10) + 1;
    printf("%d ", valores[i]);
    frecuencia[valores[i]]++;
  }
  printf("\n");
  for (int i = 0; i < m; i++) {
    printf("%d: %d\n", i, frecuencia[i]);
  }
  printf("\n");
  return 0;
}
