#include<stdio.h>

int main(void){
  int n = 0, sum = 0;
  printf("Enter N: ");
  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    printf("%d ", i);
    sum += i;
  }

  printf("\nSUM: %d", sum);
}
