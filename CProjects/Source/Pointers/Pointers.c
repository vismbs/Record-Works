#include <stdio.h>
#include<stdlib.h>

void swap(double *trans_ptr, double *arr_one, int col, int row, double *cubed){
  for(int i = 0; i != row; i++, arr_one++){
    double *trav_ptr = arr_one;
    for(int j = 0; j != col; j++, trans_ptr++, cubed++){
       *trans_ptr = *trav_ptr;
       *cubed = *trav_ptr * *trav_ptr * *trav_ptr;
       trav_ptr += col;
    }
  }
}

int main(){
  int row = 0, col = 0;

  printf("Enter ROW and COLUMN: ");
  scanf("%d %d", &row, &col);
  
  double *trans = malloc(row * col * sizeof(double)), *arr_one = malloc(row * col * sizeof(double)), *trans_ptr = trans, *cubed = malloc(row * col * sizeof(double));
  
  for(double *i = arr_one, j = 0; j < row * col; i++){
    scanf("%lf", i);
    j++;
  }
 
  swap(trans_ptr, arr_one, col, row, cubed);

  for(double *i = trans, j = 0; j < row * col; i++, j++){
    if((int) j % col == 0){
      printf("\n");
    }
    printf("%lf ", *i);
  }
  printf("\n");

  printf("\nCUBED: \n");
  
  for(double *i = cubed, j = 0; j < row * col; i++, j++){
    if((int) j % col == 0){
      printf("\n");
    }
    printf("%lf ", *i);
  }

  printf("\n");
}


