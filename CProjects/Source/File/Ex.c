#include<stdio.h>

int number_of_lines(FILE *f_one){
  char temp_char = 0;
  int count = 0;
  while((temp_char = fgetc(f_one)) != EOF){
    if(temp_char == '\n'){
      count++;
    }
  }
  return count;
}

int main(void){
  FILE *txt_one = fopen("Book.txt", "r");
  printf("COUNT: %d", number_of_lines(txt_one));
}
