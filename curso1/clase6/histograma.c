#include <stdio.h>
#define MAX_CHAR 25
//MAX_CHAR tamaño de rae

int main(){
  int letras[MAX_CHAR];
  int c;
  int d;
  long total=0;
  for(d=0;d<MAX_CHAR;d++){
    letras[d]=0;
  }

  while((c=getchar())!=EOF){
    if(c>='a'&&c<='z'){
      ++letras[c-'a'];
      ++total;
    }
  }

  for(d=0;d<MAX_CHAR;d++){
    float por=(letras[d]*100)/total;
    int j;
    printf("%c\t%d\t%f\t",'a'+d,letras[d],por);
    for(j=0;j<por;j++){
      printf("*");
  }
  printf("\n");
}
}
