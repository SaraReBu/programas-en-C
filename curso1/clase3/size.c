#include<stdio.h>

int main(){
  printf("size of char:%lu in bits:%lu \n", sizeof(char), 8*sizeof(char));
  printf("size of short:%lu in bits:%lu \n", sizeof(short), 8*sizeof(short));
  printf("size of int:%lu in bits:%lu \n", sizeof(int), 8*sizeof(int));
  printf("size of long:%lu in bits:%lu \n", sizeof(long), 8*sizeof(long));
  printf("size of float:%lu in bits:%lu \n", sizeof(float), 8*sizeof(float));
  printf("size of double:%lu in bits:%lu \n", sizeof(double), 8*sizeof(double));
  return 0;
}
