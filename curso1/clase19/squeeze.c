#include <stdio.h>

void squeeze(char cadena[], char letra);

int main(int argc, char const *argv[]) {
  char str[] = "pepe";
  printf("%s\n", str);
  squeeze(str, 'e');
  printf("%s\n", str);
  return 0;
}

void squeeze(char cadena[], char letra) {
  int i;
  int j = 0;
  for (i = 0; cadena[i] != '\0'; i++) {
    if (cadena[i] != letra) {
      cadena[j++] = cadena[i];
    }
    printf("i=%d cadena=%s j=%d\n", i, cadena, j);
  }
  cadena[j] = '\0';
}
