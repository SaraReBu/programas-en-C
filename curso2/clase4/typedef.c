#include <stdio.h>

typedef struct {
  int x;
  int y;
} point;

typedef struct {
  point point1;
  point point2;
} line;

typedef struct {
  point point1;
  point point2;
  point point3;
} triangle;

void printpoint(point pt);

int main() {
  point point0 = {0, 0};
  point point1 = {1, 1};
  point point2 = {2, 2};
  printpoint(point0);
  printpoint(point1);
  printpoint(point2);
  return 0;
}

void printpoint(point pt) { printf("(%i,%i)", pt.x, pt.y); }
