#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  int lowest = 0;
  int highest = 99;
  char answer[3];
  int check = 1;
  int intentos = 0;
  printf("Hola, piensa en un numero y pulsa ENTER \n");
  getchar();
  srand(time(NULL));
  int guess = rand() % 99;
  while (check) {
    printf("Es este el numero que has pensado es %i\n", guess);
    scanf("%s", answer);
    if ('s' == answer[0]) {
      printf("YUJU,lo he adivinado\n");
      intentos++;
      printf("Lo he adivinado en %i intentos\n", intentos);
      check = 0;
    } else {
      printf("Es mayor o menor que %i\n", guess);
      printf("Pon + si es mayor o un - si es menor\n");
      scanf("%s", answer);
      intentos++;
      if ('+' == answer[0]) {
        lowest = guess;
      }
      if ('-' == answer[0]) {
        highest = guess;
      }
      guess = (highest + lowest) / 2;
    }
  }
  return 0;
}
