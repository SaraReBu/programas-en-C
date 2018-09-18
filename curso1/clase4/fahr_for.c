#include<stdio.h>
#define UPPER 300
#define LOWER 0
#define STEP 20

int main(){
  int fahr;
  for(fahr=LOWER;fahr<=UPPER;fahr=fahr+STEP){
    printf("%3i \t %6.1f \n", fahr, (5.0f/9.0f)*(fahr-32));
  }
}
