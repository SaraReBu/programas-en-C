#include <stdio.h>

int binary_search(int item, int list[]);

void printfbinary_search(int c, int list[]);

int main() {

  int list1[] = {1, 2, 3, 4};
  printfbinary_search(0, list1);
  printfbinary_search(1, list1);
  printfbinary_search(2, list1);
  printfbinary_search(3, list1);
  printfbinary_search(4, list1);
  printfbinary_search(5, list1);
}

int binary_search(int item, int list[]) {
  int low = 0;
  int high = (sizeof(list) / sizeof(int)) - 1;

  printf("high: %d\n", high);

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

void printfbinary_search(int c, int list[]) {
  printf(binary_search(c, list) >= 0 ? "%d se encuentra en la posicion %d\n"
                                     : "%d no se encuentra en list\n",
         c, binary_search(c, list));
}
