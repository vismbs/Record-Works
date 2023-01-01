#include <stdio.h>

int main(void){
  int a = 0, b = 1, n, c = 0;
  printf("Enter N: ");
  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    if(i == 0){
      printf("%d %d ", a, b);
    }
    printf("%d ", a + b);
    c = a + b;
    a = b;
    b = c;
  }
}
