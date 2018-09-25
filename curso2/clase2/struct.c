#include <stdio.h>

struct point {
  int x;
  int y;
};
struct line {
  struct point point1;
  struct point point2;
};
struct triangle {
  struct point point1;
  struct point point2;
  struct point point3;
};

void printpoint(struct point pt);

int main() {
  struct point point0 = {0, 0};
  struct point point1 = {1, 1};
  struct point point2 = {2, 2};
  printpoint(point0);
  printpoint(point1);
  printpoint(point2);
  return 0;
}

void printpoint(struct point pt) { printf("(%i,%i)", pt.x, pt.y); }
