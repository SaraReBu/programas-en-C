#include <stdio.h>

struct point {
  int x;
  int y;
};

int cuadrante(struct point punto);

int main() {
  struct point pt1[4] = {{1, 1}, {1, -1}, {-1, -1}, {-1, 1}};
  struct point pt2[4] = {1, 1, 1, -1, -1, -1, -1, 1};
  for (int i = 0; i < 4; i++) {

    printf("Punto %i,(%i,%i) esta en el cuadrante %i\n", i, pt1[i].x, pt1[i].y,
           cuadrante(pt1[i]));
    printf("Punto %i,(%i,%i) esta en el cuadrante %i\n", i, pt2[i].x, pt2[i].y,
           cuadrante(pt2[i]));
  }
}

int cuadrante(struct point punto) {
  if ((0 == punto.x) || (0 == punto.y))
    return -1;
  if (punto.x > 0)
    if (punto.y > 0)
      return 1;
    else
      return 4;
  else if (punto.y > 0)
    return 2;
  return 3;
}
