#include<stdio.h>
#include<unistd.h>

int main(int argc, char* argv[]){
  int counter = 0;
  if(access(argv[1], F_OK) == 0){
    FILE *file_one = fopen(argv[1], "r");
    if(access(argv[2], F_OK) == 0){
      char is_append = 0;
      char copy_chars = 0;
      printf("\n%s ALREADY EXISTS. SHOULD I APPEND[Y/N]: ", argv[2]);
      scanf("%c", &is_append);
      getchar();
      if(is_append == 'Y'){
        FILE *file_two = fopen(argv[2], "a+");
        while((copy_chars = fgetc(file_one)) != EOF){
          fputc(copy_chars, file_two);
        }
        printf("\nFILE APPENDED");
        fclose(file_two);
      }else{
        FILE *file_two = fopen(argv[2], "w+");
        while((copy_chars = fgetc(file_one)) != EOF){
          fputc(copy_chars, file_two);
        }
        printf("\nFILE OVERWRITTEN");
        fclose(file_two);
      }
      if(access(argv[3], F_OK) == 0){
        FILE *file_two = fopen(argv[2], "a+");
        FILE *file_three = fopen(argv[3], "r");
        while((copy_chars = fgetc(file_three)) != EOF){
          fputc(copy_chars, file_two);
        }
        printf("\nFILE OVERWRITTEN\n");
        fclose(file_two);
        fclose(file_three);
      }else{
        printf("\n%s DOES NOT EXIST. EXITING!!!\n", argv[3]);
      }
    }
    fclose(file_one);
  } else {
    printf("\n[ERROR] FILE DOES NOT EXIST\n");
  }
  FILE *file_two = fopen(argv[2], "r");
  char copy_chars = 0;
  while((copy_chars = fgetc(file_two)) != EOF){
    if(copy_chars == ' '){
      counter++;
    }
  }
  printf("NO OF WORDS: %d ", counter);
}
