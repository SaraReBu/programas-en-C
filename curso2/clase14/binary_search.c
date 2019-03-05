#include <stdio.h>

int binary_search(char item);

char list[] = {'b', 'c', 'd', 'e'};

int main() {
  printf("%d\n", binary_search('b'));
  printf("%d\n", binary_search('c'));
  printf("%d\n", binary_search('a'));
  printf("%d\n", binary_search('d'));
  printf("%d\n", binary_search('e'));
  printf("%d\n", binary_search('g'));
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
