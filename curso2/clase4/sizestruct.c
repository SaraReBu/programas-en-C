#include <stdio.h>

typedef struct {
  int x;
  int y;
} point;

typedef struct {
  char c;
  int i;
} chint;

int main() {
  printf("size of char:%lu in bits:%lu \n", sizeof(char), 8 * sizeof(char));
  printf("size of short:%lu in bits:%lu \n", sizeof(short), 8 * sizeof(short));
  printf("size of int:%lu in bits:%lu \n", sizeof(int), 8 * sizeof(int));
  printf("size of long:%lu in bits:%lu \n", sizeof(long), 8 * sizeof(long));
  printf("size of float:%lu in bits:%lu \n", sizeof(float), 8 * sizeof(float));
  printf("size of double:%lu in bits:%lu \n", sizeof(double),
         8 * sizeof(double));
  printf("size of point:%lu in bits:%lu \n", sizeof(point), 8 * sizeof(point));
  printf("size of chint:%lu in bits:%lu \n", sizeof(chint), 8 * sizeof(chint));
  return 0;
}
