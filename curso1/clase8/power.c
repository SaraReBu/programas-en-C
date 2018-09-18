#include<stdio.h>
//potencia x elevado a y
int power(int x, int y);

int main(){
  int i;
  for(i=0;i<10;i++){

  printf("2^%i=%i\n",i,power(2,i));
}
  return 0;
}

int power(int x, int y){
  int r=1;
  int i;

  for(i=0; i<y; i++){
    r=r*x;
  }


  return r;
}
