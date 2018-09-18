#include <stdio.h>

int isleap(int year);

int main() {
  int anio = 1874;
  printf("The year 1874 %s leap.", isleap(anio) ? "is" : "isn`t");
  return 0;
}

int isleap(int year) {
  int i;
  if (year % 4 == 0 && year % 100 != 0) {
    i = 1;
  } else if (year % 400 == 0) {
    i = 1;
  } else {
    i = 0;
  }
  return i;
}
