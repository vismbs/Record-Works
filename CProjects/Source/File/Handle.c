#include<stdio.h>
#include <string.h>

typedef struct {
  char name[100];
  char address[100];
  char phone[100];
} Record;

void add_rec(){
  FILE *txt_file = fopen("File.txt", "a+");
  Record new_rec = {0};
  printf("******* ADDING A RECORD ********\n");
  printf("NAME: ");
  scanf("%s", new_rec.name);
  getchar();
  printf("ADDRESS: ");
  scanf("%s", new_rec.address);
  getchar();
  printf("PHONE: ");
  scanf("%s", new_rec.phone);
  getchar();
  fprintf(txt_file, "%s %s %s\n", new_rec.name, new_rec.address, new_rec.phone);
  printf("******* ADDED THE RECORD ********\n");
  fclose(txt_file);
}

void get_rec(){
  FILE *txt_file = fopen("File.txt", "r");
  Record new_rec;
  while(!feof(txt_file)){
    fscanf(txt_file, "%s %s %s", new_rec.name, new_rec.address, new_rec.phone);
    printf("%s %s %s\n", new_rec.name, new_rec.address, new_rec.phone);
  }
  fclose(txt_file);
}

void get_spec_rec(){
  FILE *txt_file = fopen("File.txt", "r");
  Record new_rec;

  char name[100];
  printf("Enter the Name: ");
  scanf("%s", name);
  getchar();

  while(!feof(txt_file)){
    fscanf(txt_file, "%s %s %s", new_rec.name, new_rec.address, new_rec.phone);
    if(!strcmp(name, new_rec.name)){
       printf("%s %s %s\n", new_rec.name, new_rec.address, new_rec.phone);
    }
  }
  fclose(txt_file); 
}

int main(void){
  char end_char = 'Y';
  char op_char = 'G';

  while(end_char == 'Y'){
    printf("WHATCHU WANNA DO [ADD/GET/SPECGET]: ");
    scanf("%c", &op_char);
    getchar();

    switch(op_char){
      case 'A':
        add_rec();
        break;
      case 'G':
        get_rec();
        break;
      case 'S':
        get_spec_rec();
        break;
      default:
        printf("UNKNOWN OPTION\n");
        break;
    }

    printf("CONTINUE [Y/N]: ");
    scanf("%c", &end_char);
    getchar();
  }
}



