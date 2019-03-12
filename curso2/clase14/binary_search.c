#include <stdio.h>

int binary_search(char item);

char list[] = {'b', 'c', 'd', 'e'};

void printfbinary_search(char c);

int main() {

  printfbinary_search('b');
  printfbinary_search('c');
  printfbinary_search('a');
  printfbinary_search('d');
  printfbinary_search('e');
  printfbinary_search('g');
}

int binary_search(char item) {
  int low = 0;
  int high = (sizeof(list) / sizeof(char)) - 1;
  while (low <= high) {
    int mid = (high + low) / 2;
    char guess = list[mid];
    if (item == guess) {
      return mid;
    }
    if (item < guess) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return -1;
}

void printfbinary_search(char c) {
  printf(binary_search(c) >= 0 ? "%c se encuentra en la posicion %d\n"
                               : "%c no se encuentra en list\n",
         c, binary_search(c));
}
