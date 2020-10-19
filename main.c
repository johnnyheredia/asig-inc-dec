#include <stdio.h>

int main(void) {
  
  // Reto 1
  int x = 10;
  int value;

  value = x+= (2 * x);
 
  printf("Resultado:\n %i", value);

  // reto 2

  int entero;
  int operacion;

  printf("X: ");
  scanf("%i", &entero);

  operacion = entero % 5;
  operacion++;

  printf("Imprimo: %i ", operacion);

  return 0;
}