#include<stdio.h>

union Number {
  char str_num[100];
  int int_num;
  float float_num;
  double double_num;
};

int main(void){
  int size = 0; char t_char = 0;
  printf("Enter the size of the Array: ");
  scanf("%d", &size);
  getchar();

  union Number num_arr[size];

  for(int i = 0; i < size; i++){
    printf("How do you want to store this:\nS: String\nN: Number\nF: Float\nD: Double\nSpecify your Choice: ");
    scanf("%c", &t_char);
    getchar();
  
    switch(t_char){
      case 'S':
        printf("Enter the Number in String: ");
        scanf("%s", num_arr[i].str_num);
        getchar();
        break;

      case 'N':
        printf("Enter the Number: ");
        scanf("%d", &num_arr[i].int_num);
        getchar();
        break;
      
      case 'F':
        printf("Enter the Number: ");
        scanf("%f", &num_arr[i].float_num);
        getchar();
        break;
      
      case 'D':
        printf("Enter the Number: ");
        scanf("%lf", &num_arr[i].double_num);
        getchar();
        break;
    }
  }

  for(int i = 0; i < size; i++){
    if(*num_arr[i].str_num != '\n'){
      if(i == 0){
        printf("STRING NUMBERS: %s", num_arr[i].str_num);
      }else{
        printf(" %s", num_arr[i].str_num);
      }
    }
  }

  printf("\n");

   for(int i = 0; i < size; i++){
    if(i == 0){
        printf("NUMBERS: %d", num_arr[i].int_num);
      }else{
        printf(" %d", num_arr[i].int_num);
      }
  }

  printf("\n");

   for(int i = 0; i < size; i++){
    if(i == 0){
        printf("FLOATS: %f", num_arr[i].float_num);
      }else{
        printf(" %f", num_arr[i].float_num);
      }
  }

  printf("\n");

   for(int i = 0; i < size; i++){
    if(i == 0){
        printf("DOUBLES: %lf", num_arr[i].double_num);
      }else{
        printf(" %lf", num_arr[i].double_num);
      }
  }
}
