#include<stdio.h>

int main(void){
  int elem, big, small;
  printf("Enter the Number of Elements in the Array: ");
  scanf("%d", &elem);
  getchar();

  int arr[elem];

  for(int i = 0; i < elem; i++){
    printf("Elem %d: ", i);
    scanf("%d", &arr[i]);
    getchar();
  }

  big = 0;
  small = arr[0];

  for(int i = 0; i < elem; i++){
    if(arr[i] > big){
      big = arr[i];
    }

    if(arr[i] < small){
      small = arr[i];
    }
  }
  
  printf("Big: %d | Small: %d\n", big, small);
}
