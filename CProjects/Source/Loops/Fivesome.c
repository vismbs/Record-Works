#include <stdio.h>

int main(void){
  char inp = 0;
  int sum = 0, counter = 0;
  
  while(((inp = getchar()) != '\n') && counter < 5){
    sum += (inp - 48);
    counter++;
  }

  printf("%d", sum);
}
