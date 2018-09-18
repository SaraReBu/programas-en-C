#include <stdio.h>
int strlen(char string[]);

int main() {
  char cadena[] = "que tal";
  int i = strlen(cadena);
  printf("La cadena "
         "que tal"
         " tiene %i letras",
         i);
  return 0;
}

int strlen(char string[]) {
  int i = 0;
  while (string[i] != '\0') {
    i++;
  }
  return i;
}
