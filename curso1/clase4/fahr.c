#include<stdio.h>

int main(){
  int fahr, celsius;
  int lower, upper, step;
  fahr=0;
  celsius=0;
  lower=0;
  upper=300;
  step=20;
  while(fahr<=300){
    printf("%3i \t %6.1f \n", fahr, (5.0f/9.0f)*(fahr-32));
    fahr=fahr+20;
  }
}
