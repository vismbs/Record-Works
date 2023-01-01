#include<stdio.h>
#include <stdlib.h>

int main(void){
  
  int row, col, *arr_one, *arr_two, temp, rowt, colt;
  char diff = 0;
  
  printf("Enter ROW and COL: ");
  scanf("%d %d", &row, &col);
  getchar();

  arr_one = (int*) malloc(row * col * sizeof(int));

  printf("DO YOU WANT A DIFFERENT ROW AND COL ORDER FOR 2ND MATRIX[Y/N]: ");
  scanf("%c", &diff);
  
  if(diff == 'Y'){
    temp = col;
    printf("Enter ROW and COL: ");
    scanf("%d %d", &rowt, &colt);
    getchar();

    if(temp == row){
       arr_two = (int*) malloc(rowt * colt * sizeof(int));
      }else{
      printf("INCOMPATIBLE MATRIX ORDER");
      return 0;
    }
    
  }else{
    rowt = row;
    colt = col;
    arr_two = (int*) malloc(rowt * colt * sizeof(int));
  }
  
  for(int i = 0, *j = arr_one; i < row * col; i++, j++){
    printf("M1 ELEM %d: ", i);
    scanf("%d", j);
  }

  for(int i = 0, *j = arr_two; i < rowt * colt; i++, j++){
    printf("M2 ELEM %d: ", i);
    scanf("%d", j);
  }


  if(row != colt){
    for(int *i = arr_one, *j = arr_two; i < &arr_one[row * col] || j < &arr_two[rowt * colt]; i++, j++){
      if(j >= &arr_two[rowt * colt]){
        printf("%d ", *i + 0);
      }else if(i >= &arr_one[row * col]){
        printf("%d ", *j + 0);
      }else{
        printf("%d ", *i + *j);
      }
    }
  }else{
    for(int *i = arr_one, *j = arr_two; i < &arr_one[row * col]; i++, j++){
      printf("%d ", *i + *j);
    }
  }
}

