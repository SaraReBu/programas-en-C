#include <stdio.h>

char *lower(char c[]);

int main(int argc, char const *argv[]) {
  char *c = (char *)argv[1];
  printf("%s en minusculas es", c);
  printf(" %s \n", lower(c));
  return 0;
}

// int main() {
//   char c[] = "KIKE";
//   printf("%s en minusculas es", c);
//   printf(" %s \n", lower(c));
//   return 0;
// }

char *lower(char c[]) {
  for (int i = 0; c[i] != '\0'; i++) {
    int offset = c[i] - 'A';
    char min = offset + 'a';
    c[i] = min;
  }
  return c;
}
