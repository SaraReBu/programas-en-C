#include <stdio.h>

int atoi(const char *num);

int main() {
  const char n[] = "1024";
  printf("%s %i", n, atoi(n));
}

int atoi(const char *num) {
  int n = 0;
  for (int i = 0; num[i] != '\0'; i++) {
    n = (n * 10) + (num[i] - '0');
  }
  return n;
}
