#include <stdio.h>

int main(void){
  int n;
  printf("Enter the Number of Rows: ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++){
    for(int j = 0; j < i; j++){
      printf("*");
    }
    printf("\n");
  }
}
