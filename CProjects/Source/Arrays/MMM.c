#include<stdio.h>
#include<stdlib.h>
#include <math.h>

// FUNCTION DECLARATIONS

float variance(int*, int);
int mean(int*, int);
int mode(int*, int);
float standard_deviation(int*, int);
int range(int*, int);
int unique_arr(int*, int*, int);

// MAIN FUNCTION

int main(void){
  int *arr, n, *arrt;
  printf("NUMBER OF ELEMENTS: ");
  scanf("%d", &n);
  getchar();
  
  arr = (int*) malloc(n * sizeof(int));
  arrt = (int*) malloc(n * sizeof(int));


  for(int *i = arr, j = 0; i < &arr[n]; i++, j++){
    printf("ELEM %d: ", j);
    scanf("%d", i);
    getchar();
  }
  
  int size = unique_arr(arr, arrt, n);
  for(int *i = arrt, j = 0; j < size; j++, i++){
    printf("%d ", *i);
  }
  
}

// FUNCTION DEFINITIONS

int mean(int* arr, int n){
  int sum = 0;
  for(int *i = arr, j = 0; j < n; j++, i++){
    sum += *i;
  }
  return sum / n;
}

float variance(int* arr, int n){
  int mean_val = mean(arr, n);
  int sum = 0;
  for(int *i = arr, j = 0; j < n; j++, i++){
    sum += (*i - mean_val) * (*i - mean_val);
  }
  return sum / 5.0;
}

float standard_deviation(int *arr, int n){
  int variance_val = variance(arr, n);
  return sqrt(variance_val);
}

int range(int *arr, int n){
  int big = 0, small = *arr;
  for(int *i = arr, j = 0; j < n; j++){
    if(*i > big){
      big = *i;
    }
    if(*i < small){
      small = *i;
    }
  }
  return big - small;
}

int mode(int *arr, int n){
  int max_count = 0, max_val = 0;
  for(int *i = arr, j = 0; j < n; j++, i++ ){
    int count = 0;
    for(int *k = arr, p = 0; p < n; p++, k++){
      if(*i == *k){
        count++;
      }
    }
    printf("COUNT: %d\n", count);
    printf("ELEM: %d\n", *i);
    if(count > max_count){
      max_count = count;
      max_val = *i;
    }
  }
  return max_val;
}

int unique_arr(int* arr,int* arrt, int n){
  int count = 0;
  int size = 0;
  for(int *i = arr, *d = arrt, j = 0; j < n; j++, i++){
    for(int *k = arrt, p = 0; p < n && !count; p++, k++){
      if(*i == *k){
        count++;
      }
    }
    if(count < 2){
      size++;
      *d = *i;  
    }
    count = 0;
  }

  return size;
}
