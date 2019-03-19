#include <stdio.h>

int binary_search(int item, int list[], int size);

void printfbinary_search(int c, int list[], int size);

int main() {

  int list1[] = {1, 2, 3, 4};
  printfbinary_search(0, list1, sizeof(list1));
  printfbinary_search(1, list1, sizeof(list1));
  printfbinary_search(2, list1, sizeof(list1));
  printfbinary_search(3, list1, sizeof(list1));
  printfbinary_search(4, list1, sizeof(list1));
  printfbinary_search(5, list1, sizeof(list1));
}

int binary_search(int item, int list[], int size) {
  int low = 0;
  // size of the  list =tamaño de un puntero=8
  // ARRAY_DECAY
  // array_decay.c:21:21: warning: 'sizeof' on array function parameter 'list'
  // will return size of 'int *' [-Wsizeof-array-argument]
  //    int high = (sizeof(list) / sizeof(int)) - 1;
  int high = (size / sizeof(int)) - 1;

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

void printfbinary_search(int c, int list[], int size) {
  printf(binary_search(c, list, size) >= 0
             ? "%d se encuentra en la posicion %d\n"
             : "%d no se encuentra en list\n",
         c, binary_search(c, list, size));
}
