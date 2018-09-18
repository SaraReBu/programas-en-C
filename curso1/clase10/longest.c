#include <stdio.h>
#ifndef SIZE_MAX
#define SIZE_MAX 100
#endif

int getlinea(char line[], int maxlen);
void copy(char from[], char to[]);

int main() {
  char line[SIZE_MAX];
  int length;
  char moreline[SIZE_MAX];
  int morelength = 0;

  while ((length = getlinea(line, SIZE_MAX)) != 0) {
    if (length > morelength) {
      copy(line, moreline);
      morelength = length;
    }
  }
  if (morelength == 0) {
    printf("Esto no es un texto\n");

  } else {
    printf("La linea mas larga de tu texto es %s\n", moreline);
    printf("Tiene %i letras\n", morelength);
  }
}

int getlinea(char line[], int maxlen) {
  int c;
  int i;
  for (i = 0; (c = getchar()) != EOF && c != '\n' && i < maxlen - 1; i++) {
    line[i] = c;
  }
  if ('\n' == c) {
    line[i] = '\n';
  }
  line[i] = '\0';
  return i;
}

void copy(char from[], char to[]) {
  int i = 0;
  while ((to[i] = from[i]) != '\0') {
    i++;
  }
}
