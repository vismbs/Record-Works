#include <stdio.h>

// FUNCTION DECLARATIONS

void rec_print_back(int);
void prime_num(int);
int rec_sum_arr(int*, int);
void rec_str_arr(char*, int);
int factorial(int);
void fibonacci(int, int, int);
int rec_eve_sum_arr(int*, int);

// FUNCTION DEFINITIONS

void rec_print_back(int i){
  if(i < 0){
    return;
  }
    printf("%d\n", i);
    rec_print_back(i - 1);
}

void prime_num(int i){
  int is_prime = 0;
  for(int k = 1; ((k < i) && (!is_prime)); k++){
    if((i % k) == 0){
      is_prime++;
      printf("Is a Prime");
      return;
    }
  }
  printf("Not a Prime");
}

int rec_sum_arr(int i[], int size_int){
  static int sum = 0;
  if(size_int < 0){
    return sum;
  }else{
    sum += *i;
    return rec_sum_arr(++i, --size_int);
  }
}

void rec_str_arr(char *arr, int i){
  char *char_val = &arr[i]; 
  if(i < 0){
    printf("\n");
    return;
  }else{
    printf("%c", *char_val);
    return rec_str_arr(arr, --i);
  }
}

int factorial(int i){
  if(i == 0){
    return 1;
  }else{
    return i * factorial(i - 1);
  }
}

void fibonacci(int i, int j, int counter){
  if(i == 0){
    printf("%d %d ", i, j);
  }

  if(counter < 0){
    printf("\n");
    return;
  }else{
    printf("%d ", i + j);
    fibonacci(j, i + j, --counter);
  }
}

int rec_eve_sum_arr(int i[], int size_int){
  static int sum = 0;
  if(size_int < 0){
    return sum;
  }

  if(*i % 2 == 0){
      sum += *i;
  }
  return rec_sum_arr(++i, --size_int);
}

// MAIN FUNCTION

int main(void){
}

