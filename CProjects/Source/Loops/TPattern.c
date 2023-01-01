#include <stdio.h>

int main(void){
  int n;
  printf("Enter the Number of Rows: ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++){
    for(int j = 0; j < i; j++){
      if(j == 0){
         for(int k = n - i; k > 0; k--){
          printf(" ");
        }
      }
      printf("* ");
    }
    printf("\n");
  }
}
