#include <stdio.h>

int main() {
  char cadena[] = "Hello, world!";
  char *pcadena = &cadena[0];
  char *pc2 = cadena;
  printf("Tamaño de cadena = %d \n", sizeof(cadena) / sizeof(char));
  printf("%s \n", cadena);
  printf("%s \n", pcadena);
  printf("%s \n", pc2);
}
