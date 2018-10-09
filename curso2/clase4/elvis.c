#include <stdio.h>

struct point {
  int x;
  int y;
};

int cuadrante(struct point punto);

int main() {
  struct point pt1[] = {{0, 0}, {1, 1}, {1, -1}, {-1, -1}, {-1, 1}};
  struct point pt2[] = {0, 0, 1, 1, 1, -1, -1, -1, -1, 1};
  for (int i = 0; i < 5; i++) {
    printf("Punto %i,(%i,%i) esta en el cuadrante %i\n", i, pt1[i].x, pt1[i].y,
           cuadrante(pt1[i]));
    printf("Punto %i,(%i,%i) esta en el cuadrante %i\n", i, pt2[i].x, pt2[i].y,
           cuadrante(pt2[i]));
  }
}

int cuadrante(struct point punto) {
  return 0 == punto.x || 0 == punto.y
             ? 0
             : punto.x > 0 ? punto.y > 0 ? 1 : 4 : punto.y > 0 ? 2 : 3;
}
